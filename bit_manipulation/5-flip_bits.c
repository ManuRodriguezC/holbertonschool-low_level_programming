#include "main.h"

/**
 *flip_bits - Write a function that returns the number of bits you would
 *need to flip to get from one number to another.
 *@n: Number to compareted bits.
 *@m: Number to comparated bits.
 *Return: Number bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_bits;

	for (number_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			number_bits++;
	}
	return (number_bits);
}

