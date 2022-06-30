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
int i, j;

for (i = 0 ; s[i] ; i++)
{
	for (j = 0 ; accept[j] ; j++)
	{
		if (accept[j] == s[i])
			break;
	}
	if (!accetp[j])
		break;
}
return (i);
}
