#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * @sqr: square root
 * Return: value int, -1 error
 */

int square(int n, int sqr);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find squre root
 * @n: int
 * @sqr: square root
 * Return: value int, -1 error
 */

int square(int n, int sqr)
{

	if (sqr * sqr == n)
	{
		return (sqr);
	}
	else if (square * square < n)
	{
		return (square(n, sqr + 1));
	}
	else
	{
		return (-1);
	}
}
