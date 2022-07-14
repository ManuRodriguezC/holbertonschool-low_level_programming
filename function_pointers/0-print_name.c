#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - name
 *@name: name
 *@(*f)(char *): function
 *@f: funcion
 */
void print_name(char *name, void (*f)(char *))
{
void (*fp)(char *);
fp = f;
(*fp)(name);
if (!fp)
	return (NULL);
}
