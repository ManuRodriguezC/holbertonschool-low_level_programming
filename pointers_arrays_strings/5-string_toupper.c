#include "main.h"

/**
 *
 *
 *
 */
char *string_toupper(char *a)
{
int i;

for (i = 0 ; a[i] != '\0' ; i++)
{
	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 'a' - 'A';
}

return (a);
}
