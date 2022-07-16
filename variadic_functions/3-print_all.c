#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - print everything no matter what
 *@format: all string
 *
 */
void print_all(const char * const format, ...)
{
va_list ap;
char *ch, *space = ", ";
int i, j;

va_start(ap, format);
while (format && format[i])
	i++;
while (format && formart[j])
{
	if (j == (i - 1))
		space = "";
	switch (format[j])
	{
		case 'c':
			printf("%c%s", va_arg(ap, int), space);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), space);
			break;
		case 's':
			ch = va_arg(ap, char *);
			if (ch == NULL)
				ch = "(nil)";
				printf("%s%s", ch, space);
				break;
	}
i++;
}
printf("\n");
va_end(ap);
}
