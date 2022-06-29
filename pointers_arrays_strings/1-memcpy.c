#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - copy n bytes
 *@des: destin
 *@src: orogin
 *@n: bytes
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

while (src[i] < n && src[i] != '\0')
{
	dest = src[i];
	i++;
}
return (dest);
}
