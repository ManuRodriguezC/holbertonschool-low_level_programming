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
int i, j, str;

for (i = 0 ; s[i] != '\0' ; i++)
	for (j = 0 ; accept[j] != '\0' ; j++)
		if (s[i] == accept[j])
		str++;
		return (str);
		else
			return (NULL);
}
