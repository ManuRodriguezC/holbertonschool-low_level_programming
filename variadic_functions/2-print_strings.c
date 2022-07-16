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
int j;

if (separator != NULL)
{
va_start(ap, n);

for (i = 1; i <= n; i++)
{
        printf("%c", va_arg(ap, int));
        for (j = 0; separator[j] != '\0'; j++)
        if (separator == NULL)
		printf("nil");
	{
        if (i < n)
                printf("%c", separator[j]);
        }
}
}
}
