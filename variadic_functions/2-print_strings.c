#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - firts string
 *@separator: ,
 *@n: numers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *ch;
int j;

va_start(ap, n);

for (i = 1; i <= n; i++)
{
	ch = va_arg(ap, char *);
	if (!ch)
		ch = "(nil)";
	printf("%s", ch);
	if (separator != NULL)
		for (j = 0; separator[j] != '\0'; j++)
		{
		if (i < n)
			printf("%c", separator[j]);
		}
}
va_end(ap);
printf("\n");
}
