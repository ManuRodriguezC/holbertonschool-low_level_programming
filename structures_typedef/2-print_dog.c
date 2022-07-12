#include <stdio.h>
#include "dog.h"

/**
 *print_dog - print
 *@d: dog
 *
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
	printf("(nail)");
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
if (d == NULL)
	printf("nil");

}
