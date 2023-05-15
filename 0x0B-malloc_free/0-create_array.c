#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character
 * Return:  pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);
	while (size--)
		p[size] = c;
	return (p);
}
