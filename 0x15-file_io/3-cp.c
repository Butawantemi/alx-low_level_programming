#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int file_descriptor);

/**
* Create_buffer - allocates 1024 bytes for a buffer.
* @filename: the name of the file buffer is storing chars for.
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *filename)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", filename);
exit(99);
}
return (buffer);
}
/**
* close_file - closes file descriptions.
* @file_descriptor: the file descriptor to be closed.
*/
void close_file(int file_descriptor)
{
int close_result;
close_result = close(file_descriptor);
if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
exit(100);
}
}

/**
* Main - take the contents of a file to another file.
* @argc: the number of arguments supplied to the program.
* @argv: an array of pointers to the arguments.
* Return: 0.
* Description: if the argument count is incorrect.
*/
int main(int argc, char *argv[])
{
int source_file, destination_file, read_result, write_result;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
source_file = open(argv[1], O_RDONLY);
read_result = read(source_file, buffer, 1024);
destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (source_file == -1 || read_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
write_result = write(destination_file, buffer, read_result);
if (destination_file == -1 || write_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
read_result = read(source_file, buffer, 1024);
destination_file = open(argv[2], O_WRONLY | O_APPEND);
} while (read_result > 0);
free(buffer);
close_file(source_file);
close_file(destination_file);
return (0);
}

