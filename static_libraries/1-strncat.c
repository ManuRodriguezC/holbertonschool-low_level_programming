#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenar
 *@src: origin
 *@dest: destin
 *@n: bytes
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0 ; dest[i] != '\0'; i++)
{
}
for (j = 0 ; j < n ; j++)
{
dest[i + j] = src[j];
if (src[j] == '\0')
	j = n;
}
return (dest);
}
