#include "main.h"
#include <stdio.h>

/**
 * *leet - changes some caracters
 *@s: string
 *Return: a
 */
char *leet(char *s)
{
int i, j;
char letter[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
for (i = 0 ; *(s + i) ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
	if (letter[j] == *(s + i))
		*(s + i) = numbers[j];
}
}
return (s);
}
