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

while (i > n && s[i] != '\0')
	if (s[i] < n)
		s[i] = b;

return (s);
}
