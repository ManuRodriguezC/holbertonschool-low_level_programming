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
	int n, int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = n % 10;

	printf("Last digit of %i", n"is %i", LastDigit);
	if (LastDigit > 5)
		printf("and is greater than 5\n", LastDigit);
	else
		if (LastDigit == 0)
		print("and is 0\n", LastDigit);
	else
		if (LastDigit < 6)
		printf("and is less than 6 and not 0\n", LastDigit);
	return (0);
}
