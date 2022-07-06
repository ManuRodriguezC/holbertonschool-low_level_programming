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
		printf("0\,");
	}
	if (argv[i] != int)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[i] > 0)
	{
		sum += argv[i];
	}
	printf("%d", sum);
}
return (0);
}
