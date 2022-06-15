#include <stdio.h>

/**
 *main - q and e
 *
 *Return:0
 */

int main(void)
{
char al;
char al2;
char al3;

for (al = 'a' ; al <= 'd' ; al++)
{
	putchar(al);
}
for (al2 = 'f' ; al2 <= 'p' ; al2++)
{
	putchar(al2);
}
for (al3 = 'r' ; al3 <= 'z' ; al3++)
{
	putchar(al3);
}
putchar('\n');
return (0);
}
