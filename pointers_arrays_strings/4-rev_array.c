#include "main.h"
#include <stdio.h>

/**
 *reverse_array - yarra
 *@n: numbers
 *@a: array
 *Return: 0
 */
void reverse_array(int *a, int n)
{
int i, x;

for (i = 0 ; i < n ; i++)

for (x = 0 ; x < i ; x++)
	{
	i--;
	printf(a[i]);
	}
return (0);
}
