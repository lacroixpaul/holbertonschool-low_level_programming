#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename : name of the file.
 * @letters :  is the number of letters it should read and print.
 * Return: actual number of letters or 0 if NULL of fail.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	int cursorchar = 0;

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	while ((cursorchar = fgetc(fptr)) != EOF)
	{
		_putchar(cursorchar);
	}

	fclose(fptr);
	return (letters);
}
