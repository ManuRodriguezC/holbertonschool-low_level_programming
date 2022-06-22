#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - ver
 *@*s: string
 *@s: gnirts
 *
 */
void print_rev(char *s)
{
int i;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		printf(s[i--]);
	}
	printf('\n');
}
