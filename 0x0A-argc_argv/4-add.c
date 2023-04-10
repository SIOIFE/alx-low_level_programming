#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - To check if there are digits
 * @str: an array of string
 *
 * Return: 0 on success
 */
int check_num(char *str)
{
	/* variable declaratin */
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /* check str count */
	{
		if (!isdigit(str[count])) /* check if there are number in str */

		{
		return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the name of program
 * @argv: Argument counts
 * @argc: Array of argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count;
	int str;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
	if (check_num(argv[count]))
		{
	str = atoi(argv[count]);
	sum += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
