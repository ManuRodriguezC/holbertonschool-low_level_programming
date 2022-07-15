#include "3-calc.h"
#include <string.h>

/**
 *(*get_op_func - call fucntions)
 *@s: character
 *Return:s
 */
int includes(char *string, char *substring)
{
		if (string == NULL || substring == NULL)
				return (0);

		if (*string == '\0')
				return (1);

		if (*string == *substring)
				return (includes(string + 1, substring + 1));

		return (0);
}


int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
