#include "main.h"

/**
 *main - print name
 *@argc: number caracters
 *@argv: caracter
 *Return: 0
 */
int main(int argc, char *argv[])
{
char i;

for (i = 0; i < argc; i++)
{
	_putchar(argv[i]);
}
return (0);
}
