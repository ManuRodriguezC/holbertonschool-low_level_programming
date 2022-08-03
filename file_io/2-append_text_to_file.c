#include "main.h"

/**
 *append_text_to_file - Write a function that appends text at
 *the end of a file.
 *@filename: Name of the file.
 *@text_content: Text to appends in file.
 *Return: 1 if the file exists and -1 if failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrfd, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

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
