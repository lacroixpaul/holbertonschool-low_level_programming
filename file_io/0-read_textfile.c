#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename : name of the file.
 * @letters :  is the number of letters it should read and print.
 * Return: actual number of letters or 0 if NULL of fail.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read != bytes_written)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_read);
}
