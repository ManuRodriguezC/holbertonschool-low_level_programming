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

for (i = 1 ; i < argc ; i++)

if (argc > 1)
{
	mul = *argv[i] * *argv[i + 1];
}
printf("%d\n", mul);
}
if (argc < 2)
{
	printf("Error\n");
	return (1);
}
return (0);
}
