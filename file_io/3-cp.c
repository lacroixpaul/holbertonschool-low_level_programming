#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * error_code - print message error.
 * @message : message to print.
 * @filename : of the file which doesn't work.
 * @exit_code : code of the error.
 **/

void error_code(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file.
 * @argc : number of arguments.
 * @argv : a first file to copy and a second to store.
 * Return: 0 if success.
 **/

int main(int argc, char *argv[])
{
	int source, target;
	ssize_t n_read, n_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source == -1)
		error_code("Can't read from file", argv[1], 98);
	target = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (target == -1)
	{
		close(source);
		error_code("Can't write to", argv[2], 99);
	}
	while ((n_read = read(source, buffer, sizeof(buffer))) > 0)
	{
		n_written = write(target, buffer, n_read);
		if (n_written != n_read)
		{
			close(target);
			close(source);
			error_code("Can't write to", argv[2], 99);
		}
	}
	if (n_read == -1)
	{
		close(source);
		close(target);
		error_code("Can't read from file", argv[1], 98);
	}
	if (close(source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
	if (close(target) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", target), exit(100);
	return (0);
}
