#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print
 *@a: matris
 *@size: size
 */
void print_diagsums(int *a, int size)
{
int i, j, sum1, sum2, p;
for (i = 0 ; i < size ; i++)
{
p = (i * size);
sum1 += *(a + i);
}
for (j = 0 ; j < size ; j++)
p = (i * size) + (size - 1 - j);
sum2 += *(a + j);
}
printf("%i, %i" sum1, sum2);
}
