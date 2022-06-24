#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copy string
 *@dest: new string
 *@str: origin string
 *@*str: value string
 *@*dest: value new string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] <= '\0' ; i++)
strcpy(dest, src[i]);
return (dest);
}
