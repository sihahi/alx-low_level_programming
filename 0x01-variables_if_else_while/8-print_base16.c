#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);
		if (num == 57)
			num += 39;
		num++;
	}
	putcha('\n');
}
