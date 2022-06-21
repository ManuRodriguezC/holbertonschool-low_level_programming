#include "main.h"

/**
 *print_square - 10x10
 *@size: numbers of times
 *
 */
void print_square(int size)
{
int height, width;
if (size <= 0)
	_putchar('\n');
else
	for (height = 0 ; height < size; height++)
	{
		for (width = 0 ; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
