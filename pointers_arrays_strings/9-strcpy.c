#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copy string
 *@dest: new string
 *@str: origin string
 *@*str: value string
 *@*dest: value new string
 *
 */
char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);

printf("%s", src);
printf("\n");
printf("%s", dest);
}
