#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file.
 * @filename : name of the file.
 * @text_content : a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure or if filename is NULL.
 **/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
