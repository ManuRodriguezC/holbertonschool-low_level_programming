#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - raised to the power
 *@x: number
 *@y: raised
 *Return: -1, 1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y <= 1)
{
	return (1);
}
else
{
	return (x * _pow_recusion(x,y - 1));
}
}
