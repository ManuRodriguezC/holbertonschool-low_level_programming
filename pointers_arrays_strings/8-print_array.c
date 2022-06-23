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
int len, i;

len = strlen(n);

for (i = 0 ; i <= len ; i++)
	printf(n[i]);
		if (i != len)
			printf(",");
			printf(" ");
}
