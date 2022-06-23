#include "main.h"
#include <stdio.h>

/**
 *rev_string - revers of string
 *@*s: pointer s
 *@s: variable
 *
 */
void rev_string(char *s)
{
int i, x;
int t = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		t++;
		_putchar(s[i]);
_putchar('\n');
	for (x = (t - 1) ; x >= 0 ; x--)
		_putchar(s[x]);

}
