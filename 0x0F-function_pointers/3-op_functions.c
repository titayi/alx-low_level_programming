#include "3-calc.h"

/**
 * op_add - returns the sum of a & b
 * @a: Param 1
 * @b: Param 2
 * Return: Sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns thr difference of a and b
 * @a: Param 1
 * @b: Param 2
 * Return: Success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: Param 1
 * @b: Param 2
 * Return: Success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a: Param 1
 * @b: Param 2
 * Return: Success
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: Param 1
 * @b: Param 2
 * Return: Success
 */
int op_mod(int a, int b)
{
	return (a % b);
}
