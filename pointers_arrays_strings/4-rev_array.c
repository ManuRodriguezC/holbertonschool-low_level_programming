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
int i, x;
int tem;
for (i = 0 ; a[i] <= n ; i++)

for (x = 0 ; x < i ; x++)
	{
	i--;
	tem = a[x];
	a[x] = a[i];
	a[i] = tem;
	}
}
