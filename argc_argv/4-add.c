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
int j = 0;
int sum = 0;
int tem = 0;

for (i = 0 ; i < argc ; i ++)
{
	while (argv[i][j])
	{
		if (isdigit(argv[i][j]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
		tem = atoi(argv[i]);
		sum = tem + sum;
	}
printf("%d\n", sum);
return (0);
}
