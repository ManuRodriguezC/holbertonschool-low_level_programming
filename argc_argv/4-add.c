#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - print name
 *@argc: number caracters
 *@argv: caracter
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc ; i++)
{
	if (argv[i] == 0)
	{
		printf("0\n");
	}
	if (argv[i] == (argv[i] >'a' && argv[i] < 'z'))
	{
		printf("Error\n");
		return (1);
	}
	if (argv[i] > 0)
	{
		sum += argv[i];
	}
	printf("%d\n", sum);
}
return (0);
}
