#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - array
 *@array: array
 *@size: size
 *@cmp: funtion
 *Return:-1, 0, 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0 && cmp && array)
{
for (i = 0; i < size; i++)
	if ((cmp)(array[i]))
		return (i);
return (-1);
}
