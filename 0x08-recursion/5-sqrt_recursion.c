#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: value of square, -1 error
 */

int _sqrt_recursion(int n)
{
	int square = 1;

	if (square * square == n)
	{
		square = _sqrt_recursion(n/2);
		return (square);
	}
	if (square * square < n)
	{
		square = _sqrt_recursion((n - 1) / 2);
		return (square);
	}
	else
		return (-1);
}
