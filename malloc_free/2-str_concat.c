#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
char *s3 = NULL;
int i, j;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

unsigned int len = strlen(s1) + strlen(s2);

s3 = malloc(sizeof(char) * len + 1)

if (!s3)
	return (NULL);
for (i = 0 ; s1[i] != '\0' ; i++)
	s3[i] = s1[i];
for (j = 0 ; s2[j] != '\0' ; j++)
	s3[i] = s2[i];
s3[i + 1] = '\0';

return (s3);

free(s3);
}
