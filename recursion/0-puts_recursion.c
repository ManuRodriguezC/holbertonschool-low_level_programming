#include "main.h"

/**
 *_puts_recursion - print string
 *@s: string
 *
 */
void _puts_recursion(char *s)
{
int i = 0;

if (s[i] < '\0')
	_putchar(*s + 1);
}
