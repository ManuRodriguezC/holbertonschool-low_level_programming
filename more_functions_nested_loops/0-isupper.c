#include "main.h"

/**
 *_isupper - Diferents in uppercase and others
 *@c: c is a lether or othercase
 *Return: 0 if c is upper case, 0 othercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);

else if (c >= 'a' && c <= 'z')
	return (0);
}
