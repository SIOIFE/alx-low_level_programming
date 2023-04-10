#include <stdio.h>
#include "main.h"

/**
 * main - prints the difference between two numbers
 * @argv: Array of arguments vector
 * @argc: Arguments counts
 *
 * Return: 0 on success && 1 on error
 */
int main(int argc, char *argv[])
{
	int number, b, difference;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	difference = 0;
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && number >= 0; b++)
	{
		while (number >= coins[b])
		{
			difference++;
			number -= coins[b];
		}
	}
	printf("%d\n", difference);
	return (0);
}
