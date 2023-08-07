#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
* create_file - Create a file with given content.
* @filename: Name of the file to create.
* @text_content: NULL terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor, write_result, text_length;
if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
for (text_length = 0; text_content[text_length] != '\0'; text_length++)
;
write_result = write(file_descriptor, text_content, text_length);
if (write_result == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}
