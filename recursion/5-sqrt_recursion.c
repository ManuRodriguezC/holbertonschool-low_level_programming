#include "main.h"

/**
 *_sqrt_recursion - square root
 *@n: number
 *Return: -1, n
 */
int _sqrt_recursion(int n)
{
int i = n;
if (n < 0)
	return (-1);

if ((n * n) != i)
	_sqrt_recursion(n - 1);

return (n);
}
