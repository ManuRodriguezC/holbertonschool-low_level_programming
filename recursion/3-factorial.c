#include "main.h"
#include <stdio.h>

/**
 *factorial - factorial of a number
 *@n: number
 *Return: -1, n
 */
int factorial(int n)
{
if (n < 0)
{
	return (-1);
}
else
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
}
