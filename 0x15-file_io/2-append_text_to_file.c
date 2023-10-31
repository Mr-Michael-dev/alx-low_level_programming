#include "main.h"
#include <string.h>

/**
 * append_text_file - appends text at end of a file
 * @filename: file to be append text
 * @text_content: text to append
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = strlen(text_content);

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);

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
