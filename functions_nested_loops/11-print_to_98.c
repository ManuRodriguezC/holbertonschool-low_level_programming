#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - conteo
 *@n: number diferent a 98
 *Return: 0
 */
void print_to_98(int n, space, comm)
{
space = ' ';
comm = ',';
if (n == 98)
	printf("%i", n);
else
	if (n < 98)
	{
		printf("%i", n);
		n++;
	}
else
	if (n > 98)
	{
		printf("%i", n);
		n--;
	}
printf(comm);
printf(space);
return (0);
}
