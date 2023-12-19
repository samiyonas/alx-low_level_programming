#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - read text file
 * @filename: file
 * @letters: number of characters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr, re;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	re = read(fd, buffer, letters);
	close(fd);
	if (re == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDIN_FILENO, buffer, letters);
	if (re != wr)
	{
		return (0);
	}

	return (wr);
}
