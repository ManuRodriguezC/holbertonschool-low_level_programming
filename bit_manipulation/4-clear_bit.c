#include "main.h"

/**
 *clear_bit - Write a function that sets the value of a bit to 0 at a given
 *index.
 *@n: Is a number to convert.
 *@index: Is a index
 *Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
