#include "main.h"
#include <stdlib.h>

/**
 * *create_array - new array
 *@size: size
 *@c; character
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
char *new [];
int i;
new = malloc(sizeof(char) * size);

if (!new)
	return (NULL);

for (i = 0 ; i < size ; i++)
	new[i] = c;
return (0);
}
