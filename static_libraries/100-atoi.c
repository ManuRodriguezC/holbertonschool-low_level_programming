#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - Converts a string into an integer
 * @s: The pointer of the source string.
* Return: The integer.
 */

int _atoi(char *s)
{
	int res = 0;
	int i = 0;
	int len = strlen(s);
	int flag = 0;

	while (i <= len)
	{
		if (s[i] == '-')
		{
			flag++;
		}

		if (s[i] <= '9' && s[i] >= '0')
		{
			if (flag % 2)
			{
				res = (res * 10) - (s[i] - '0');
			} else
			{
				res = (res * 10) + (s[i] - '0');

			}
			if (s[i + 1] > '9' || s[i + 1] < '0')
			{
				break;
			}
		}
		i++;
	}
	return (res);
}
