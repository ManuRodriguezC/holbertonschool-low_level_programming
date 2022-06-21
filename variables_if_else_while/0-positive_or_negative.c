#include <stdio.h>
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
if (n > 0)
	printf("%d is positive\n", n);
else
	if (n == 0)
	printf("%d is zero\n", n);
else
	if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
