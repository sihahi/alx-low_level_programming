#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: the adresse of memory to print
 * @b: character
 * @n: the size of the memory to print
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size;

	for (size = 0; n > 0; size++, n--)
	{
		s[size] = b;
	}

	return (s);
}
