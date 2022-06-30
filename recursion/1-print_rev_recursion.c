#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - print rev
 *@s: string
 *
 */
void _print_rev_recursion(char *s)
{
int i;
if (s[i] == '\0')
	_putchar(s[i - 1]);
_print_rev_recursion(s - 1);

}
