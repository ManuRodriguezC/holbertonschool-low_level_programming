#include <stdlib.h>
#include <time.h>

/**
 *main - Assign a ramdom number
 *Description: Generates a random number and compare the last digit
 *to evaluate 3 conditions
 *Return: zero and prints a message
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf ("is positive")
	};
	else
		(n = 0)
	{
		printf("is zero")
	};
	if (n < 0)
	{
		printf("is negative")
	};
	return (0);
}
