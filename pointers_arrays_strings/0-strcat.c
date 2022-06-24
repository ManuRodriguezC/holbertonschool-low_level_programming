#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenar
 *@dest: destin
 *@src: inicio
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
int t = 0;

for (i = 0 ; dest[i] != '\0'; i++)
t++;

for (j = 0 ; src[j] == '\0' ; j++)
dest[t + j] = src[j];

return (dest);
}
