#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - print rev
 *@s: string
 *
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (s[0] != '\0')
	i++;
_putchar(s[i]);
_print_rev_recursion(s - 1);

}
