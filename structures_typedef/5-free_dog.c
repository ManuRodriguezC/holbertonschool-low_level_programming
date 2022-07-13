#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - free new_dog
 *@dog_t *d: function
 *
 */
void free_dog(dog_t *d)
{
free(d);
}
