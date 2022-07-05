#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - take the same characters
 * @s: string
 * @accept: similary
 * Return: s, NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0 ; s[i] ; i++)
{
	for (j = 0 ; accept[j] ; j++)
	{
		if (accept[j] == s[i])
			break;
	}
	if (accept[j])
		return (s + i);
}
return (0);
}
