#include "main.h"

/**
 *get_bit - Write a function that returns the value of a bit at a given index.
 *@n: Is the number comparete.
 *@index: Is the index, starting from 0 of the bit you want to get
 *Return: Value od the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8)
	return (-1);
return ((n >> index) & 1);
}
