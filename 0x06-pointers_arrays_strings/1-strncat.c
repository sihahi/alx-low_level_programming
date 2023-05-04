#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination pointer input
 * @src: source pointer input
 * @n: byte number
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;
	for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
		dest[c + c1] = src[c1];
	dest[c + c1] = '\0';
	return (dest);
}
