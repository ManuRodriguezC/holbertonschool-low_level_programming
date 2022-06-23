#include "main.h"
#include <stdio.h>

/**
 *print_array - vector int
 *@*a: array
 *@n: numbers
 *@a: a
 *
 */
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ; i++)
	printf("%d", a[i]);
	printf(",");
	printf(" ");
}
