#include "main.h"
#include <stdlib.c>
#include <string.h>

/**
 *
 *
 *
 */
char *_strdup(char *str)
{
char *dest = NULL;
int i, j:

for (i = 0 ; str[i] != '\0' ; i++)

dest = malloc(sizeof(*dest) * i);

if (!str)
	return (NULL);

for (j = 0 ; dest[j] != '\0' ; j++)
	dest[j] = str[i];

return (dest);
free(dest);
}
