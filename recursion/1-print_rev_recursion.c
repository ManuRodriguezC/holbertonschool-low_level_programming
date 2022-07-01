#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - print rev
 *@s: string
 *
 */
void _print_rev_recursion(char *s)
{

if (s == NULL || *s == '\0')
	return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
