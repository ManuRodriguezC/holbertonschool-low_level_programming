#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - revers of string
 *@*s: pointer s
 *@s: variable
 *
 */
void print_rev(char *s)
{
int x, i;
int t = 0;

_putchar(s);

for (i = 0 ; s[i] != '\0' ; i++)
t++;
for (x = (t - 1) ; x >= 0 ; x--)
_putchar(s[x]);
}
