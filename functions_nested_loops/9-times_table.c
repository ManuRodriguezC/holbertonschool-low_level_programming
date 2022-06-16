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
	for (t = 0 ; t <= 9 ; t++)
	{
		m = (n * t);
		_putchar(m + 48);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
