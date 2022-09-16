#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search
 * @array: array that search to position of the value
 * @size: size of the array
 * @value: value to search in array
 * Return: position of the value or -1 if value is out of range
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, higt = size - 1, pos = 0;

	if (array == NULL || size == 0 || value == NULL)
		return (-1);

	while (low <= higt && value >= array[low] && value <= array[higt])
	{
		pos = low + ((value - array[low]) * (higt - low))
			/ (array[higt] - array[low]);
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			low = pos + 1;
		else if (value < array[pos])
			higt = pos - 1;
		else
			return (pos);
	}
	if (value > array[higt])
		printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}
