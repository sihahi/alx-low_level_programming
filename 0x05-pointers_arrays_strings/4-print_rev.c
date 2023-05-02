#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: parametr input
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
}
