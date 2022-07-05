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
int i, j;

printf("%d\n", argc);

for (i = 0 ; i < argc ; i++)

for (j = 0 ; j < *argv[i] ; j++)

return (0);
}
