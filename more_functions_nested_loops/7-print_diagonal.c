#include "main.h"

/**
 *print_diagonal - linea diagonal
 *@n: number print
 *
 */
void print_diagonal(int n)
{
int j, l;

if (n <= 0)
	_putchar('\n');

for (j = 0 ; j < n; j++)
	for (l = 0 ; l <= j ; l++)
		if (l == j)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar(' ');
}
