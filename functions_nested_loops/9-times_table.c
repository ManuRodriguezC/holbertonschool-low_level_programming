#include "main.h"

/**
 *times_table - mult
 *
 *
 */
void times_table(void)
{
int n, t, m;
for (n = 0 ; n <= 9 ; n++)
	_putchar('0');
	for (t = 1 ; t <= 9 ; t++)
	{
		_putchar(',');
		_putchar(' ');
		m = (n * t);
		if (m < 10)
			_putchar(' ');
		else
			_putchar((m / 10) + 48)
		_putchar((m % 10) + 48);
	}
_putchar('\n');
}
