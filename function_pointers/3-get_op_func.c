#include "3-calc.h"
#include <string.h>

/**
 *(*get_op_func - call fucntions)
 *@s: character
 *Return:s
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s))
			return (ops[i].f);
		i += 1;
	}
	return (NULL);
}
