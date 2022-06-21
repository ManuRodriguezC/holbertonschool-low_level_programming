#include <stdio.h>

/**
 *main - conteo 1 al 100
 *
 *Return: 0
 */
int main(void)
{
int number;
for (number = 1; number <= 100 ; number++)
	if (number % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else
		if (number % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
	else
		if (number % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
	else
	{
	printf("%i", number);
	printf(" ");
	}
return (0);
}
