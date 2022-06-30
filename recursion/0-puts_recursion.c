#include "main.h"

/**
 *_puts_recursion - print string
 *@s: string
 *
 */
void _puts_recursion(char *s)
{
int i;

for (i = 0 ; s[i] != '\0' ; i++)
	_putchar(*s);
}
