#include "3-calc.h"

/**
 *op_add - sum of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_add(int a, int b)
{
	int add = 0;

	add = a + b;
	return (add);
}

/**
 *op_sub - difference of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_sub(int a, int b)
{
	int sub = 0;

	sub = a - b;
	return (sub);
}

/**
 *op_mul - product of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_mul(int a, int b)
{
	int mul = 0;

	mul = a * b;
	return (mul);
}

/**
 *op_div - division of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}
/**
 *op_mod - remainder of the division of a and b
 *@a: firts number
 *@b: seconds number
 *Return: number
 */
int op_mod(int a, int b)
{
	int mod = 0;

	mod = a % b;
	return (mod);
}
