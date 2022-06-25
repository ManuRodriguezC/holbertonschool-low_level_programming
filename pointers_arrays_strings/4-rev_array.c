#include "main.h"
#include <stdio.h>

/**
 *reverse_array - yarra
 *@n: numbers
 *@a: array
 *
 */
void reverse_array(int *a, int n)
{
int i, tem;
for (i = 0 ; i < n ; i++)
{
	n--;
	tem = a[i];
	a[i] = a[n];
	a[n] = tem;
}
}
