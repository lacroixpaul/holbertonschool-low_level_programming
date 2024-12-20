#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename : name of the file.
 * @text_content : a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure or if filename is NULL.
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));
	else if (text_content == NULL)
		return (1);
	else
		return (-1);
	close(fd);
	return (1);
}
