#include "main.h"

int main(int ac, char *argv[]);
/**
 * main - entry point display the information in the ELF header
 * @ac: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 if succeed or errors if fail.
 */

int main(int ac, char *argv[])
{
	int fd1;
	int fd2;
	char buffer[1024];
	ssize_t num;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num = read(fd1, buffer, 1024)) > 0)
	{
		if (num == -1)
		{
			close(fd1);
			close(fd2);
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (write(fd2, buffer, num) != num)
		{
			close(fd1);
			close(fd2);
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}

	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}
