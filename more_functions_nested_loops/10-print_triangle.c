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
	for (h = size ; h > 0; h--)
	{
		for (w = 0 ; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
