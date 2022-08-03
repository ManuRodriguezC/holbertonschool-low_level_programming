#include "main.h"

/**
 *create_file - Create a function that creates a file.
 *@filename: Name of the file
 *@text_content: text in the file
 *Return: write text inside the file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrfd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
	;
	wrfd = write(fd, text_content, count);

	if (wrfd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
