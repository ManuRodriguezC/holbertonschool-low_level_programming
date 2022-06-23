#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - ver
 *@*s: string
 *@s: gnirts
 *
 */
void print_rev(char *s)
{
int i, x;
int t = 0;

for (i = 0 ; s[i] != '\0' ; i++)

t++;

for (x = (t - 1) ; x >= 0 ; x--)

_putchar(s[x]);
_putchar('\n');
}
