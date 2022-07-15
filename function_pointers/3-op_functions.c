#include "3-calc.h"

/**
 *op_add - sum of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_div(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MASSAGE, EXIT_BY_ZERO);
	return (a / b);
}
/**
 *op_mod - remainder of the division of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_mod(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MASSAGE, EXIT_BY_ZERO);
	return (a % b);
}
