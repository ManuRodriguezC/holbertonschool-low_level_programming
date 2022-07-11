#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *@nmemb: numbers bytes
 *@size: size bytes
 *Return: new
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, tam;
char *new;

if (nmemb == 0 || size == 0)
	return (NULL);

tam = (nmemb * size);
new = malloc(tam);

if (new == 0)
	return (NULL);

for (i = 0 ; i < tam ; i++)
	new[i] = 0;
return (new);
}
