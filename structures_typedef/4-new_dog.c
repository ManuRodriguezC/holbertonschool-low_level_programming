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
struct dog *dog_t = NULL;

new_name = malloc(sizeof(*new_name) * strlen(name) + 1);
new_owner = malloc(sizeof(*new_owner) * strlen(owner) + 1);

if (!new_name || !new_owner)
	return (NULL);

strcpy(new_name, name);
strcpy(new_owner, owner);

dog_t = malloc(sizeof(struct dog));

if (!dog_t)
{
	return (NULL);
	free(dog_t);
	free(new_name);
	free(new_owner);
}
dog_t->name = new_name;
dog_t->age = age;
dog_t->owner = new_owner;
return (dot_t);
}
