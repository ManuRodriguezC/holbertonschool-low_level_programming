#include "main.h"

/**
 *more_numbers - chain of numbers
 *
 *
 */
void more_numbers(void)
{
int list;
int numbers;

for (list = 0 ; list <= 9  ; list++)
{
	for (numbers = 0 ; numbers <= 14 ; numbers++)
		_putchar(numbers + '0');
		if (numbers > 9)
		{
			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
}
}
