#include "main.h"

/**
 *print_triangle - triangle form
 *@size: any number
 *
 */
void print_triangle(int size)
{
int h, w;
if (size <= 0)
	_putchar('\n');
else
	for (h = 0 ; h < size ; h++)
	{
		for (w = size ; w >= 0 ; w--)
			if (w <= h)
				_putchar('#');
			else
				_putchar(' ');

		_putchar('\n');
	}
}
