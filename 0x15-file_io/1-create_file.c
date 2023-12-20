#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content to be written to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int fd_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		i++;
	}

	fd_w = write(fd, text_content, i);

	if (fd_w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
