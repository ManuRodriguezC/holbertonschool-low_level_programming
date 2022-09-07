#include "search_algos.h"

/**
 *
 * 
 */
int binary_search(int *array, size_t size, int value)
{
    size_t position = 0, len = 2;
    int temp;

    if (array == NULL)
        return (-1);

    while (len <= size)
    {
        printf("Searching in array: ");
        while (position < size)
        {
            temp = array[position];
            printf("%d, ", temp);
            position++;
        }
        size /= 2;
        printf("\n");
    }
}