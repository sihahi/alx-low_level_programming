#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c stdout
 * @c: the character to print
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return ((write(1, &c, 1));
}
