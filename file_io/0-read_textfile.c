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
char *buff;

if (!buff)
	return (0);

buff = malloc(sizeof(size_t) * letters);

if (!filename)
	return (0);

fd = open(filename, O_RDONLY, 0600);

readfd = read(fd, buff, letters);
write(STDOUT_FILENO, buff, readfd);
free(buff);
close(fd);
return (readfd);
}
