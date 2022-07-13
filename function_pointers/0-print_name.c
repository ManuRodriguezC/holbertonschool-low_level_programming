#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - name
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
void (*f)(char);
f = &name;
(*f)();
}
