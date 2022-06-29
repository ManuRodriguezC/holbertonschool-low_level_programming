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
int i;

for (i = 0 ; s[i] !='\0' ; i++)
	if (s[i] < n)
		s[i] = b;
return (s);
}
