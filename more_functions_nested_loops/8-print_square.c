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
	while (l < size)
	{
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
		l++;
	}
}
