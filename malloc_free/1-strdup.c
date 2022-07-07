#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - copy string
 *@str: string
 *Return: dest
 */
char *_strdup(char *str)
{
char *dest = NULL;
unsigned int j;
int len = 0;

len = strlen(str);

dest = malloc(sizeof(char) * len + 1);

if (!str || str == NULL)
	return (NULL);

for (j = 0 ; str[j] != '\0' ; j++)
	dest[j] = str[j];

dest[j + 1] = '\0';

return (dest);
free(dest);
}
