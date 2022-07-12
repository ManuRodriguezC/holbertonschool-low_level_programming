#ifndef DOG_H
#define DOG_H

/**
 *struct dog_t - dog dates
 *@name: pointer of name
 *@age: age of the dog
 *@owner: owner
 */
struct dog_t
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
