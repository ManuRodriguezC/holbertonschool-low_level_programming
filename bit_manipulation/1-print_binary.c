#include "main.h"

/**
 *print_binary - Convert decimal to binaty
 *n: is a decimal number
 *
 */
void print_binary(unsigned long int n)
{
char cadena[63];
int i;

itoa(n, cadena, 2);

for (i = 0; cadena[i] != '\0'; i++)
	_putchar(i);
}
