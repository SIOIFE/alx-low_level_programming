#include "main.h"
/**
 *_strien - returns the length of a string
 * @s: string
 * Return: lenght
 */
int _strien(har *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
