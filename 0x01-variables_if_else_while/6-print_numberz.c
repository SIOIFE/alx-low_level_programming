#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'print single digit number of base 10 from 0'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
