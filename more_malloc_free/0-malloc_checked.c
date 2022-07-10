#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - directyon malloc
 *@b: size
 *Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
void *c;

c = malloc(b);

if (c == NULL)
{
	exit(98);
}
return (c);
}
