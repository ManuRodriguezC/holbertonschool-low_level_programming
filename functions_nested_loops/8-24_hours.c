#include "main.h"

/**
 *jack_bauer - day
 *
 *
 */
void jack_bauer(void)
{
int n, h, a, b, c, d;
for (h = 0 ; h <= 23 ; h++)
	for (n = 0 ; n <= 59 ; n++)
	{
		a = (h / 10);
		b = (h % 10);
		c = (n / 10);
		d = (n % 10);
		_putchar('a');
		_putchar('b');
		_putchar(':');
		_putchar('c');
		_putchar('d');
		_putchar('\n');
	}
}
