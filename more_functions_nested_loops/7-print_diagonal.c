#include "main.h"

/**
 *print_diagonal - linea diagonal
 *@n: number print
 *
 */
void print_diagonal(int n)
{
while (n != 0)
	if (n < 0)
	{
		_putchar(92);
		n--;
	}
_putchar('\n');
}
