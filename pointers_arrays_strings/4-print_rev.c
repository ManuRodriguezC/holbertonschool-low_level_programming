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
int tam, w;
char invs;

strcpy(invs, s);

tam = strlen(s);
for (w = 0; w < tam ; w++)
{
	invs[w] = s[tam - 1 - w];
}
	
puts(invs);
}
