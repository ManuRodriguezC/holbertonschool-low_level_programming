#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_array - vector int
 *@a: a
 *@n: n
 *
 */
void print_array(int *a, int *n)
{
int i;

for (i = 0 ; i < *n ; i++)
	printf("%c", a[i]);
}
