#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - ver
 *@*s: string
 *@s: gnirts
 *
 */
void rev_string(char *s)
{
char point = s[0];
int x;
int i = 0;

while (s[i] != '\0')
	i++;
for (x = 0 ; x < i ; x++)
{
	i--;
	point = s[x];
	s[x] = s[i];
	s[i] = point;
}
}
