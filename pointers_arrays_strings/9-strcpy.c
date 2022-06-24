#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copy string
 *@dest: new string
 *@src: origin string
 *@*src: value string
 *@*dest: value new string
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
char i;

for (i = 0 ; src[i] <= '\0' ; i++)
	printf(src[i]);

return (0);
}
