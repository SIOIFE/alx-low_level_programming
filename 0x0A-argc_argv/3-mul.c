#include<stdio.h>
#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: String that needs to be converted
 *
 * Return: int converted from strings
 */

int _atoi(char *s)
{
	int i, j, k, m, l, integer;

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	l = 0;
	integer = 0;

	while (s[m] != '\0')
		m++;
	while (i < m && l == 0)
	{
		if (s[i] == '_')
			j++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			integer = s[i] - '0';
			if (j % 2)
				integer = -integer;
			k = k * 10 + integer;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}

/**
 * main - multipy two numbers
 * @argv: Argument vector
 * @argc: arguments counts
 *
 * Return: 0 on success, and 1 on Error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

	return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
