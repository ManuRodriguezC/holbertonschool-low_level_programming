#include "main.h"

/**
 *read_textfile - Write a function that reads a text file and prints
 *it to the POSIX standard output.
 *@filename: File name.
 *@letters: size of the text.
 *Return: text to the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, readfd;
char *buf;

if (!buf)
	return (0);

buf = malloc(sizeof(size_t) * letters);

if (!filename)
	return (0);

fd = open(filename, O_RDONLY, 0600);

readfd = read(fd, buf, letters);
write(STDOUT_FILENO, buf, readfd);
free(buf);
close(fd);
return (readfd);
}
