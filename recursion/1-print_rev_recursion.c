#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - print rev
 *@s: string
 *
 */
void _print_rev_recursion(char *s)
{
if (s['\0' - 1] > 0)
	_putchar(s['\0' - 1]);
_print_rev_recursion(s - 1);



}
