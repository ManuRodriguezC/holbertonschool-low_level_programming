#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
int i, j;

for (i = 0 ; s[i] != '\0' ; i++)
	for (j = 0 ; j < n ; j++)
		s[j] -= b;
	i++;
return (s);
}
