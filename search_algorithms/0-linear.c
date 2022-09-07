#include "search_algos.h"

/**
 * linear_search - This function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: Array conformate for the integers.
 * @size: Size of the array.
 * @value: Value to comparated with the all position in the array.
 * Return: -1 if the value no search in array or the position if
 * the value is in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t position = 0;
	int count = 0, temp;

	if (array == NULL)
		return (-1);

	while (position < size)
	{
		temp = array[position];
		printf("Value checked array[%d] = [%d]\n", count, temp);
		if (value == temp)
			return (count);
		position++;
		count++;
	}
	return (-1);
}
