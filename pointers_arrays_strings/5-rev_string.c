#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - revers of string
 *@*s: pointer s
 *@s: variable
 *
 */
void rev_string(char *s)
{
int i;
int t = 0;
char x;

puts(s);

for (i = 0 ; s[i] != '\0' ; i++)
t++;
for (x = (t - 1) ; x >= 0 ; x--)
puts(s[x]);
}
