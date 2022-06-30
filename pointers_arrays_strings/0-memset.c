#include "main.h"
#include <stdio.h>

/**
 * *_memset - n changes
 *@s: string
 *@b: constan
 *@n: number changes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i, j;

for (i = 0 ; s[i] != '\0' ; i++)
	while (s[j] < n)
		if (s[i] == s[j])
			s[i] = b;
	j++;
return (s);
}
