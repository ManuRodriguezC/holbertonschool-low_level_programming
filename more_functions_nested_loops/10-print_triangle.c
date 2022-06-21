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
	for (h = 1 ; h <= size ; h++)
	{
		for (w = 1 ; w <= size ; w++)
		{
			if (w <= (size - h))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
