#include "main.h"

/**
 *main - Write a program that copies the content of a file to another file.
 *@argc: Number of argumnets in the fuction.
 *@argv: Argumens vector.
 *Return: 0 or success
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, rd, clrd, clwr;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((rd = read(fd_read, buf, 1024)) != 0)
	{
	if (fd_write == -1 || write(fd_write, buf, rd) != rd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_read), exit(99);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	}
	clrd = close(fd_read);
	clwr = close(fd_write);
	if (clrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %c\n", fd_read), exit(100);
	}
	if (clwr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %c\n", fd_write), exit(100);
	}
	return (0);
}
