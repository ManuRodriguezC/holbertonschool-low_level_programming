#include "main.h"

/**
 *_isalpha - islower
 *@c: variable
 *Return: 1 if c is letter case, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
else
	return (0);
}
