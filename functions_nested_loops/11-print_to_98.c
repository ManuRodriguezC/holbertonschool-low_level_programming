#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - conteo
 *@number: number diferent a 98
 *@space: whitespace
 *@comm: comm
 *Return: 0
 */
void print_to_98(int n)

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
		number--;
	}
printf(",");
printf(" ");
return (0);
}
