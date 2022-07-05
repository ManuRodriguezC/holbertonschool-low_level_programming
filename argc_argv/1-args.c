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
        printf("%d", argc);
        printf("\n");
}
return (0);
}
