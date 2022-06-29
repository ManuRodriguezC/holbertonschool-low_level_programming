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
int i = 0;
int j;
for (j = 0 ; s[j] < n ; j++)

while (i < j && s[i] != '\0')
{
if (s[i] == s[j])
	s[i] = b;
i++;
}
return (s);
}
