#include "search_algos.h"

/**
 * jump_search - This function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: The array to search a value.
 * @size: Size of the array.
 * @value: Value to search in the array.
 * Return: The position of the value to search or -1 if the search failed.
 */
int jump_search(int *array, size_t size, int value)
{
	int square = sqrt(size), position = 0, len = 0, temp, tam = size;

	if (array == NULL)
		return (-1);

	while (position < tam)
	{
		temp = array[position];
		if (array[position] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					position - square, position);
			len = position - square;
			while (len <= position)
			{
				printf("Value checked array[%d] = [%d]\n", len, array[len]);
				if (array[len] == value)
					return (len);
				len++;
			}
		}
		if (array[position] < value)
			printf("Value checked array[%d] = [%d]\n", position, temp);
		position = position + square;
	}
	return (-1);
}
