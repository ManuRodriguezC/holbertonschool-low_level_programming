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

if (argc > 0)
{
	for (i = 0 ; i < argc ; i++)
	{
	mul = *argv[i] * *argv[i + 1];
	printf("%d\n", mul);
	}
}
printf("Erro");
return (1);
}
