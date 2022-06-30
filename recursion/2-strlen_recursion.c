#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - count
 *@s: string
 *Return: i
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (s[0] == '\0')
		return;
if (s[0] != '\0')
_strlen_recursion(s + 1);
	(s[0] != '\0')
	i++;
return (i);
}
