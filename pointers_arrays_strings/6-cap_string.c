#include "main.h"
#include <stdio.h>

/**
 * *cap_string - string changes
 *@a
 *
 */
char *cap_string(char *a)
{
int i;

for (i = 0 ; a[i] < '\0' ; i++)
{
	if (a[0] >= 'a' && a[i] <= 'z')
		a[0] -= 'a' - 'A';
}
return (a);
}
