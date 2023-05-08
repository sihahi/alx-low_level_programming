#include <stdio.h>

/**
 * main - entry point
 *
 * description:  prints all possible different combinations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit1, digit2;

	digit1 = 0;
	digit2 = 1;
	while (digit1 <= 8 && digit2 <= 9)
	{
		putchar(digit1 + 48);
		putchar(digit2 + 48);

		if (digit1 + digit2 != 17)
		{
			putchar(',');
			putchar(' ');
		}
		digit2++;
	}
	digit1++;
	putchar('\n');

	return (0);
}
