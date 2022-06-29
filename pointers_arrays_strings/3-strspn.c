#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, cont;
while (s[i] == accept[j])
{
	for (i = 0 ; s[i] != '\0' ; i++)
	for (j = 0 ; accept[j] != '\0' ; j++)
cont++;
}
return (cont);
}
