#include "main.h"

/**
 * _strstr - function that searches a string for any of a set of bytes
 * @haystack: string
 * @needle: substring
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s1 = haystack;
		char *s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0')
			return (haystack);
	}
		return (0);
}
