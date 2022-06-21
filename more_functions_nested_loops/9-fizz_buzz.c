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
	if (number % 15 == 0)
	{
		printf("FizzBuzz");
		printf(" ");
	}
	else
		if (number % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
	else
		if (number % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
	else
	{
	printf("%i", number);
	printf(" ");
	}
printf("\n");
return (0);
}
