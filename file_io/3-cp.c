#include "main.h"

/**
 *main - Write a program that copies the content of a file to another file.
 *@argc: Number of argumnets in the fuction.
 *@argv: Argumens vector.
 *Return: 0 or success
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, wr, rd, clrd, clwr;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	rd = read(fd_read, buf, 1024);
	if (!fd_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = write(fd_write, buf, rd);
	if (!fd_write || !wr)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	clrd = close(fd_read);
	clwr = close(fd_write);
	if (fd_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", clrd);
		exit(100);
	}
	if (fd_write)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", clwr);
		exit(100);
	}
	return (0);
}
