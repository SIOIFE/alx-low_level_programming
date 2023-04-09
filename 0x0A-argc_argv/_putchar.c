#include <unistd.h>
#include <stdio.h>
#include "main,h"

/**
 * _putchar - writes the the character c to standard ouptut
 * @c: this is the character to print
 * Return: on success 1.
 * On error, -1 returned and errno is appropriately setted.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
