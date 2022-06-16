#include "main.h"

/**
 *print_alphabet_x10 - alx10
 *
 *
 */
void print_alphabet_x10(void)
{
int n, l;
for (l = 0 ; l < 10 ; l++)
{
	for (n = 'a' ; n <= 'z' ; n++)
		_putchar(n);
	_putchar('\n');
}
}
