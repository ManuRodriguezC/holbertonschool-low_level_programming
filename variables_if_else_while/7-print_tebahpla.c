#include <stdio.h>

/**
 *main - mirror
 *
 *Return: 0
 */

int main(void)
{
char la;

for (la = 'z' ; la >= 'a' ; la--)
{
putchar(la);
}
putchar('\n');
return (0);
}
