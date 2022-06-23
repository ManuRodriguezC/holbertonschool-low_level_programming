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
int len, i;
len = (strlen(str) / 2);
if ((len / 2) % 1 == 0)
	for (i = len ; str[i] != '\0' ; i++)
		_putchar(str[i]);
else 
	for (i = (len - 1) ; str[i] != '\0' ; i++)
		_putchar(str[i]);
_putchar('\n');

}
