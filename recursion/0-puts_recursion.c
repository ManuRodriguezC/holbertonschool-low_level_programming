#include "main.h"

/**
 *_puts_recursion - print string
 *@s: string
 *
 */
void _puts_recursion(char *s)
{
if (s == NULL || *s '\0')
	return;

_putchar(s);
_puts_recursion(s + 1);
}
