#include "main.h"
/**
 * main - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Description: "function to swap the values of two integers"
 * Return: n
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
