#include <stdio.h>
#include "3-calc.h"

/**
 *(*get_op_func - call fucntions)
 *@s: character
 *Return:s
 */
int (*get_op_func(char *s))(int, int)
{
char funciones = "+-/*%";
if (s == funciones)
	return (s);
}
