#include "main.h"

/**
 *print_last_digit - digit
 *@n: last digit
 *Return: Last digit
 */
int print_last_digit(int n)
{
int l = 0, x = 0;
l = n % 10;
if (l < 0)
	l = l * (-1);
x = '0' + l;
_putchar(x);
return (l);
}
