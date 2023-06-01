#include "lists.h"

/**
 * _putchar - function to print
 * @c: character
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
