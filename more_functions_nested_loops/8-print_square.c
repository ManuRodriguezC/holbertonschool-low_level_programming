#include "main.h"

/**
 *print_square - 10x10
 *@size: numbers of times
 *
 */
void print_square(int size)
{
int l, w;
if (size <= 0)
	_putchar('\n');
else
{
for (l = 0 ; l < size ; l++)
	for (w = 0 ; w < size ; w++)
		if (l == w)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
			_putchar('#');
}
}
