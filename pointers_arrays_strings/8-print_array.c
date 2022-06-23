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

int len = strlen(a);

for (n = 0 ; n <= len ; i++)
	printf(a[n]);
		if (n != len)
			printf(",");
			printf(" ");
}
