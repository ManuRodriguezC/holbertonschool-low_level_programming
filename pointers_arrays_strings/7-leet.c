#include "main.h"
#include <stdio.h>

/**
 * *leet - changes some caracters
 *@s: string
 *Return: a
 */
char *leet(char *s)
{
int i;
for (i = 0 ; s[i] != '\0' ; i++)
{
	if ((s[i] == 'a' && s[i] == 'A' || (s[i] == 'e' && s[i] == 'E') || (s[i] == 'o' && s[i] == 'O') || (s[i] == 't' && s[i] == 'T') || (s[i] == 'l' && s[i] == 'L'))
		s[i] = 4;
}
return (s);
}
