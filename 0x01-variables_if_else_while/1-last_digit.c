#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ed;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ed = n % 10;
	if (ed > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, ed);
	}
	else if (ed == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ed);
	}
	else
	{
			printf("last digit of %d is %d and is less than 6 and not 0\n", n, ed);
	}
	return (0);

}
