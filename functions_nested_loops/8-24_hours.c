#include "main.h"

/**
 *jack_bauer - day
 *
 *
 */
void jack_bauer(void)
{
int n, h;
for (h = 0 ; h <= 23 ; h++)
	for (n = 0 ; n <= 59 ; n++)
	{
		_putchar('h' % 100);
		_putchar('h' % 10);
		_putchar(':');
		_putchar('n' % 100);
		_putchar('n' % 10);
		_putchar('\n');
	}
}
