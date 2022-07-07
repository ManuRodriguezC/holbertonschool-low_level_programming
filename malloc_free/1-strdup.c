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
int i, j;

for (i = 0 ; str[i] != '\0' ; i++)

dest = malloc(sizeof(*dest) * i);

if (!str)
	return (NULL);

for (j = 0 ; str[j] != '\0' ; j++)
	dest[j] = str[i];

return (dest);
free(dest);
}
