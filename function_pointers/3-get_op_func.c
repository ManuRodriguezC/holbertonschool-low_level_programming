#include "3-calc.h"

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
		return (includes(string + 1, substring +1));

	return (0);

}

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
		if (includes(ops[i].op, s))
			return (ops[i].f);
		i += 1;
	}
	return (NULL);
}
