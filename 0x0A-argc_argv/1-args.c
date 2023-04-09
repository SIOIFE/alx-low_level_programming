#include<stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: Argument counts
 *@argv: Argument vector
 *
 * Return: Always 0 on (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
