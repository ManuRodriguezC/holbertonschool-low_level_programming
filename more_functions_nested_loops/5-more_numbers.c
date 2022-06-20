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
for (list = 0 ; list <= 9 ; list++)
	_putchar('\n');
	for (numbers = 0 ; numbers <= 9 ; numbers++)
		_putchar(numbers + '0');
_putchar('\n');
}
