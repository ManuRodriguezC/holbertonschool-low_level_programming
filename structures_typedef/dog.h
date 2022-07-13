#ifndef DOG_H
#define DOG_H

/**
 *struct dog - dog dates
 *@name: pointer of name
 *@age: age of the dog
 *@owner: owner
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
