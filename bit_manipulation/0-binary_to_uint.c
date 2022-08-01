#include "main.h"

/**
 *binary_to_uint - Write a function that converts a binary
 *number to an unsigned int.
 *@b: Is a number in binary
 *Return: Binary number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int len = 0, base = 1, i;
char bin;

if (!b)
	return (0);

while (b[len] != 0)
	len++;

for (i = len - 1; i >= 0; i--)
{
	if (b[i] != '0' && b[i] != '1')
		return (0);

	bin = b[i];
	if (bin == '1')
	{
		number += base;
	}
	base = base * 2;
}
return (number);
}
