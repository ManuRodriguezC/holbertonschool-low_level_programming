#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - numbers
 *@separator: separators
 *@n: number of times
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int j;

if (separator != NULL && n != 0)
{
va_start(ap, n);

for (i = 1; i <= n; i++)
{
	printf("%d", va_arg(ap, int));
	for (j = 0; separator[j] != '\0'; j++)
	{
	if (i < n)
		printf("%c", separator[j]);
	}
}
va_end(ap);
printf("\n");
}
}
