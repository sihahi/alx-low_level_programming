#include <stdio.h>

/**
 * main - entry point
 *
 * description:  prints all possible different combinations of three digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit1, digit2, digit3;

	digit1 = 0;
	while (digit1 <= 7)
	{
		digit2 = 1;
		while (digit2 <= 8)
		{
			digit3 = 2;
			while (digit3 <= 9)
			{
				if (digit1 != digit2 &&
				digit1 < digit2 && digit2 != digit3 && digit2 < digit3)
				{
					putchar(digit1 + 48);
					putchar(digit2 + 48);
					putchar(digit3 + 48);

					if (digit1 + digit2 + digit3 != 24)
					{
					putchar(',');
					putchar(' ');
					}
			}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
