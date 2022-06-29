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
char new;
for (i = 0 ; s[i] != '\0' ; i++)

for (j = 0 ; j <= n ; j++)
new ++;
{
	new -= b;
	s[i] = new + s[i];
}
return (s);
}
