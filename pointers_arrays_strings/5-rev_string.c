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
int i, x;
int t = 0;
while (s[i] != '\0')
	t++;
for (x = 0 ; x < t ; x++)
{
	t--;
	point = s[x];
	s[x] = s[t];
	s[t] = point;
}
}
