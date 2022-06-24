#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copy string
 *@dest: new string
 *@src: origin string
 *@*src: value string
 *@*dest: value new string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0 ; src[i] != '\0' ; i++)
dest[i] = src[i];
if (src[i] == '\0')
	dest[i] = '\0';
return (dest);
}
