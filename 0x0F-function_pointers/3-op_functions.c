#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int k, int b);
int op_mul(int m, int b);
int op_div(int j, int b);
int op_mod(int n, int b);
/**
 * op_add - Returns the sum of two ints
 * @a: The first int.
 * @b: The second int.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @k: The first number.
 * @b: The second number.
 *
 * Return: The difference of k and b.
 */
int op_sub(int k, int b)
{
	return (k - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @m: The first number.
 * @b: The second number.
 *
 * Return: The product of m and b.
 */
int op_mul(int m, int b)
{
	return (m * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @j: The first number.
 * @b: The second number.
 *
 * Return: The quotient of j and b.
 */
int op_div(int j, int b)
{
	return (j / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @n: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of n by b.
 */
int op_mod(int n, int b)
{
	return (n % b);
}
