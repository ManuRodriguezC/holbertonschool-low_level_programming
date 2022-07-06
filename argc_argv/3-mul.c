#include "main.h"
#include <stdio.h>

/**
 *main - print name
 *@argc: number caracters
 *@argv: caracter
 *Return: 1
 */
int main(int argc, char *argv[])
{
int i;
int mul = 0;

for (i = 0 ; i < argc ; i++)
{
	if (i > 2)
	{
		mul = ( argv[i] * argv[i + 1]);
		printf("%d\n", mul);
	}

	if (i < 1)
	{
		printf("Error\n");
	}
}
return (0);
}
