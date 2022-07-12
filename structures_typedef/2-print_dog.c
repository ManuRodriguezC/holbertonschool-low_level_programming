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
if (name == NULL)
	printf("(nail)");
printf("Name: %c", d->name);
printf("Age: %i", d->age);
printf("Owner: %c", d->owner);
}
if (*d == NULL)
	printf("nil");

}
