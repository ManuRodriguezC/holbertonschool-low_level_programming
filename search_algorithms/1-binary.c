#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: The array to searches for a value.
 * @size: The size of the array.
 * @value: Value to search in the array.
 * Return: -1 if the value not search in array or the position
 * of the value in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	int position = 0, count = 0, last = size - 1, med;

	if (array == NULL || size == 0)
		return (-1);

	while (position <= last)
	{
		count = 0;
		printf("Searching in array: ");
		count = position;
		while (count <= last)
		{
			if (count == last)
				printf("%d\n", array[count]);
			if (count != last)
				printf("%d, ", array[count]);
			count++;
		}
		med = (position + last) / 2;

		if (array[med] < value)
			position = med + 1;
		else if (array[med] > value)
			last = med - 1;
		else
			return (med);
	}
	return (-1);
}
