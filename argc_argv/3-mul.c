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
	for (i = 1 ; i < argc ; i++)
	{
	mul = *argv[i] * *argv[i + 1];
	}
	printf("%d\n", mul);
else
printf("Error");
return (1);
}
