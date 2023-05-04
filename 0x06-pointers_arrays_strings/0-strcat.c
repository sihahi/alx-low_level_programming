#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: Destination pointer input
 * @src: Source pointer input
 * Return:  pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];

	return (dest);
}
