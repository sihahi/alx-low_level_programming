#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: string
 * @needle: substring
 * Return: 0 (success)
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
