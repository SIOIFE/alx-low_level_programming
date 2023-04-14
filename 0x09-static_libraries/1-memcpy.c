#include "main.h"

/**
 * _memcpy - copies memory locations
 * @dest: destination to copy to
 * @src: memory source
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}
	return (dest);
}
