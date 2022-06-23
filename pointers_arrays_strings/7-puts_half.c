#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *puts_half - asasas
 *@str: string
 *
 */
void puts_half(char *str)
{
int len, i, j;
len = (strlen(str) / 2);
if (len % 2 == 0)
	for (i = len ; str[i] != '\0' ; i++)
		_putchar(str[i]);
else 
	for (j = (len - 1) ; str[j] != '\0' ; j++)
		_putchar(str[j]);
_putchar('\n');

}
