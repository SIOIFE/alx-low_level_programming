#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes characters to standard output
 * @c:character to be printed
 *
 * REturn: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
