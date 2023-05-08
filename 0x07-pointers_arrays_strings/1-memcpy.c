#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: the adresse of memory to print
 * @n: the size of the memory to print
 * @dest: pointer to return
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
