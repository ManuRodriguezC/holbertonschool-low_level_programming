#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print
 *@a: matris
 *@size: size
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1 = 0, sum2 = 0, p;
for (i = 0 ; i < size ; i++)
{
p = (i * size) + i;
sum1 += *(a + p);
}
for (j = 0 ; j < size ; j++)
{
p = (j * size) + (size - 1 - j);
sum2 += *(a + p);
}
printf("%i, %i", sum1, sum2)
}
