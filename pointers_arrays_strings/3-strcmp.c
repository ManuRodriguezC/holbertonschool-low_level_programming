#include "main.h"

/**
 *_strcmp - Comparing two strings
 *@s1: string one
 *@s2: string two
 *Return: -1, 0, 1|
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
int t1 = 0;
int t3 = 0;
int t2 = 0;
{
for (i = 0 ; s1[i] != '\0' ; i++)
	t1++;
	t3++;
for (j = 0 ; s2[j] != '\0' ; j++)
	t2++;
if (t1 < t2)
	return (-1);
else if (t2 < t1)
	return (1);
else if (t1 == t3)
	(return (0);)
}
}
