#include "main.h"
#include <stdlib.h>

/**
 * *array_range - array integree
 *@min: values min
 *@max: values max
 *Return: list
 */
int *array_range(int min, int max)
{
int *list, i, len;

if (min > max)
	return (NULL);

len = (max - min);

list = malloc(sizeof(int) * (len + 1));

if (list == NULL)
	return (NULL);

for (i = 0 ; i <= len ; i++)
	list[i] = min++;

return (list);
}
