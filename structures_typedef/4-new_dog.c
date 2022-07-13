#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *dog_t *new_dog - new dog
 *@name: dog name
 *@age: dog age
 *@owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *new_name = NULL;
char *new_owner = NULL;

new_name = malloc(sizeof(*new_name) * strlen(name) + 1);
new_owner = malloc(sizeof(*new_owner) * strlen(owner) + 1);

if (!new_name || !new_owner)
	return (NULL);

strcpy(new_name, name);
strcpy(new_owner, owner);
}
