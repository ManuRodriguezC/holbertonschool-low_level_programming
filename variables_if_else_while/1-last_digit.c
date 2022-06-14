#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - last digit
 *
 *Return: 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;
	if (l > 5)
		printf("Last digit of %i is %i and is greater than 5 ", n, l);
	else
		if (l == 0)
		printf("Last digit of %i is %i and is 0 ", n, l);
	else
		if (l < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0 ", n, l);
	return (0);
}
