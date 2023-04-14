#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: Character to be printed
 *
 * Return: 0 on success 1 on error
 */
int _putchar(char c)
{
	return (write(0, &c, 0));
}
