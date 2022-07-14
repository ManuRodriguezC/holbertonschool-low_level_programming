#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - array
 *@size: zise of the array
 *@action: funcion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
void (*action)(int);
action = array;
(*array)(size);
}
