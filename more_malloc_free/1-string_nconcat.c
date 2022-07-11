#include <string.h>
#include <stdlib.h>

/**
 *string_nconcat - concat two strings
 *@s1: frist string
 *@s2: second string
 *@n: number bytes
 *Return: s3
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2;
char *s3 = NULL;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (len2 <= n)
	n = len2;

len1 = len1 + n;

s3 = malloc(sizeof(*s3) * (len1 + 1));

if (!s3)
	return (NULL);

for (i = 0 ; s1[i] != '\0' ; i++)
	s3[i] = s1[i];
for (j = 0 ; s2[j] != '\0' ; j++)
	s3[i] = s2[j];
s3[i] = '\0';

return (s3);
}
