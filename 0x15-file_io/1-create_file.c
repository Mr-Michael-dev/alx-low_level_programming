#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and write into it
 * @filename: file to be created
 * @text_content: string to write
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = strlen(text_content);

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

		if (fd == -1)
		{
			return (-1);
		}
	}
	else
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if ((write(fd, text_content, length)) != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
