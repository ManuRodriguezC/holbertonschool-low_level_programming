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

for (j = 0 ; j < argc ; j++)

for (i = 0; i < j; i++)
{
	printf("%s", argv[i]);
}
return (0);
}
