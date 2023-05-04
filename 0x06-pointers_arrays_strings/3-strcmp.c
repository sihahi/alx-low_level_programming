#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 79) - ((int)s2 - 79);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
