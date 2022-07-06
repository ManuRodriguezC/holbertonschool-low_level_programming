#include "main.h"
#include <stdio.h>

/**
 *main - print name
 *@argc: number caracters
 *@argv: caracter
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, j;

if (argc != 3)
	printf("Error\n");
else
{
	i = strtol(argv[1], 0, 10);
	j = strtol(argv[2], 0, 10);
	printf("%d\n", i * j);
}
return (0);
