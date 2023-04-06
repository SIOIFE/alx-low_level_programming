#include "main.h"
/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: number whose square root is to be known
 *
 * Return: the resulting square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1)
			return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural sqt of a number
 * @n: number to calculate it sqt
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
