#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all combinations of single-digit numbers'
 * Return: alway 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
