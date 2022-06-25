#include "main.h"

/**
 *
 *
 *
 */
char *string_toupper(char *)
{
int i;
int min;
int may;
for (min = 'a' ; min <= 'z' ; min++)
for (may = 'A' ; may <= 'Z' ; may++)

for (i = 0 ; *[i] <= '\0' ; i++)
{	
if (*[i] == min)
	*[i] = may;
}
return (*);
}
