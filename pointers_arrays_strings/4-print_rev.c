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
int box, revers;
int size = 0;

for (box = 0 ; s[box] != '\0' ; box++)

size++;

for (revers = (size - 1) ; revers >= 0 ; revers--)

_putchar(s[revers]);
_putchar('\n');
}
