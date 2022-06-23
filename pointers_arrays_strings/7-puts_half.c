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
for (i = len ; str[i] != '\0' ; i++)
		_putchar(str[i]);

_putchar('\n');

}
