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

if (argc > 1)
{
	for (i = 1 ; i < argc ; i++)
	{
	mul = mul * *argv[i];
	printf("%d\n", mul);
	}
}
printf("Erro");
return (1);
}
