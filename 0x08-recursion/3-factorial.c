#include "main.h"
/**
 * factorial - returns the factoria of a number
 * @n: number to return the factoria from
 * Return: factoria of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
