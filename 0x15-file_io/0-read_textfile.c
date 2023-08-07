#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
* Return: The actual number of letters read and printed.
* If the file can't be opened or read, return 0.
* If filename is NULL, return 0.
* If write fails or doesn't write the expected amount of bytes, return 0.
*/
ssize_t read_textfile(const char *filename, size_t max_letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t bytes_written;
ssize_t total_bytes_read;
if (filename == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
buffer = malloc(sizeof(char) * max_letters);
if (buffer == NULL) 
{
close(file_descriptor);
return (0);
}
total_bytes_read = read(file_descriptor, buffer, max_letters);
bytes_written = write(STDOUT_FILENO, buffer, total_bytes_read);
free(buffer);
close(file_descriptor);
return (bytes_written);
}

