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
dest = src;
for (i = 0 ; src[i] != '\0' ; i++)
printf("%i", src[i]);
return (dest);
}
