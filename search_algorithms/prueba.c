#include "search_algos.h"

/**
 *
 * 
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
        {
            return (count);
        }
        position++;
        count++;
    }
    return (-1);
}