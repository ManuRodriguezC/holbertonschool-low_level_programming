#include "main.h"
#include <stdio.h>

/**
 * *cap_string - string changes
 *@a: string
 *Return: a
 */
char *cap_string(char *a)
{
int i, j;
char sep[arra] = " \t\n,;.!?\"(){}";
i = 1
if (a[0] >= 'a' && a[0] <= 'z')
	a[0] -= ('a' - 'A');
while (a[i] != '\0')
	{
	for (j = 0; sep[j] != '\0'; j++)
		if (a[i - 1] == sep[j] && (a[i] >= 'a' && a[i] <= 'z'))
			sep[i] -= ('a' - 'A');
	i++;
	}
return (a);
}
