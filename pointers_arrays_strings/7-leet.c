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
switch (s[0])
{
	case s[0] == 'a' && s[0] == 'A':
		s[0] -= 4;
		break;
	case s[0] == 'e' && s[0] == 'E':
		s[0] -= 3;
		break;
	case s[0] == 'o' && s[0] == 'O':
		s[0] -= 0;
		break;
	case s[0] == 't' && s[0] == 'T':
		s[0] -= 7;
		break;
	case s[0] == 'l' && s[0] == 'L':
		s[0] -= 1;
		break;
}
return (s);
}
