#include "main.h"

/**
 *jack_bauer - day
 *
 *
 */
void jack_bauer(void)
{
int n, h, z, x, y, w;
for (h = 0 ; h <= 23 ; h++)
	for (n = 0 ; n <= 59 ; n++)
	{
		z = (h / 10);
		x = (h % 10);
		y = (n / 10);
		w = (n % 10);
		_putchar('a');
		_putchar('b');
		_putchar(':');
		_putchar('c');
		_putchar('d');
		_putchar('\n');
	}
}
