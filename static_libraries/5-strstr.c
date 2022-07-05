#include "main.h"
#include <stdio.h>

/**
 * *_strstr - camp
 *@haystack: one
 *@needle: two
 *Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *src = haystack;
char *sust = needle;
while (*haystack && *sust && *haystack == *sust)
{
haystack++;
sust++;
}
if (!*sust)
	return (src);
haystack = src + 1;
}
return (0);
}
