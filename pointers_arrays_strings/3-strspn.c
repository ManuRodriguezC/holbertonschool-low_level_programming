#include "main.h"
#include <stdio.h>

/**
 *_strspn - length
 *@s: string origin
 *@accept: string two
 *Return: cont
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, cont = 0;

for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; accept[j] != '\0' ; j++)
{
	if (accept[j] == *s)
		cont++;
}
}
return (cont);
}
