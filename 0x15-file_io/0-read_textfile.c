#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * read_textfile - reads a text file and print to stdout
 * @filename: file to be read
 * @letters: number of letters to be read
 *
 * Return: number of letters it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rtv_read;
	ssize_t rtv_write = 0;
	size_t printed = 0;
	ssize_t i;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rtv_read = -1;

	while ((rtv_read = read(fd, buffer, letters)) > 0)
	{
		if (rtv_read == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}

		for (i = 0; i < rtv_read; i++)
		{
			if (printed >= letters)
			{
				break;
			}
			printed++;
		rtv_write = write(1, &buffer[i], 1);

		if (rtv_write == -1)
		{
			free(buffer);
			return (0);
		}
		}
	}

	close(fd);
	free(buffer);
	return (printed);
}
