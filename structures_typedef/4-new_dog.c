#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 *dog_t *new_dog - new dog
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name = NULL;
	char *new_owner = NULL;
	struct dog *d;

	new_name = malloc(sizeof(*new_name) * strlen(name) + 1);
	new_owner = malloc(sizeof(*new_owner) * strlen(owner) + 1);

	if (new_name || new_owner == NULL)
		return (NULL);

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		free(d);
		free(new_name);
		free(new_owner);
		return (NULL);
	}

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}
