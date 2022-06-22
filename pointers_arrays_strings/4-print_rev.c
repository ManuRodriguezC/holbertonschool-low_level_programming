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
int i = 0;
int d;
int longitud = strlen(s);
char temporal;

for (d = longitud - 1 ; i < (longitud / 2) ; i++, d--)
{
	temporal = s[i];
	s[i] = s[d];
	s[d] = temporal;
}
puts(s);
return (0);
}
