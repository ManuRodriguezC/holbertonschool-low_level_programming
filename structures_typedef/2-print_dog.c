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
printf("Name: %s", d->name);
printf("Age: %f", d->age);
printf("Owner: %c", d->owner);
}
if (*d == NULL)
	printf("nil");

}
