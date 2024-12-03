#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * main - copies the content of a file to another file.
 * @argc : number of arguments.
 * @argv : a first file to copy and a second to store.
 * Return: nothing.
 **/

void main(int argc, char *argv[])
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
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	target = open(argv[2], O_WRONLY | O_TRUNC);
	if (target == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(source, buffer, sizeof(buffer))) > 0)
	{
		n_written = write(target, buffer, n_read);
		if (n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
}
