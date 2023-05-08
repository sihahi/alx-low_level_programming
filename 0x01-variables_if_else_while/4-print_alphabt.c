#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
