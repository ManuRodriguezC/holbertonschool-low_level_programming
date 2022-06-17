#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - conteo
 *@number: number diferent a 98
 *@space: whitespace
 *@comm: comm
 *Return: 0
 */
void print_to_98(int number, space, comm)
{
space = " ";
comm = ",";
if (number == 98)
	printf("%i", number);
else
	if (number < 98)
	{
		printf("%i", number);
		number++;
	}
else
	if (number > 98)
	{
		printf("%i", number);
		number--;
	}
printf("%i", comm);
printf("%i", space);
return (0);
}
