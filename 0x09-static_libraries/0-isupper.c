#include "main.h"

/**
 * _isupper - uppercase letter
 * @c: char to be checked
 *
 * Return: 0 on success or 1 on error
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
