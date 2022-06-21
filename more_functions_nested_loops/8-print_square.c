#include "main.h"

/**
 *print_square - 10x10
 *@size: numbers of times
 *
 */
void print_square(int size)
{
int l, w;
if (n <= 0)
	_putchar('\n');

for (l = 0 ; l < size ; l++)
	for (w = 0 ; w < l ; w++)
		if (l == w)
			_putchar('#');
			_putchar('\n');
		else
			_putchar('#');
}
