#include <stdio.h>

/**
 * _putchar - function to puts
 * @c: character to print
 * Return: 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
