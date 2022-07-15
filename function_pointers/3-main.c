#include "3-calc.h"

/**
 *main - funcion main
 *@argument_counter: counter
 *@argument_vector: array
 *Return: EXIT_SUCCESS
 */
int main(int argument_counter, char **argument_vector)
{
	int (*operation)(int, int) = NULL;
	int result = 0, a = 0, b = 0;
	char *op = NULL;


	THROW_ERROR(argument_counter != 4, ERROR_MESSAGE, EXIT_INVALID_ARG);

	a = atoi(argument_vector[1]);
	op = argument_vector[2];
	b = atoi(argument_vector[3]);

	operation = get_op_func(op);

	THROW_ERROR(operation == NULL, ERROR_MESSAGE, EXIT_NULL_OPERATOR);

	result = operation(a, b);

	printf(FORMAT_RESULT, result);

	return (EXIT_SUCCESS);
}
