#include "main.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y
 * @x: number to raise
 * @y: power
 * Return: return pow, -1 error
 */

int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		pow = (x * _pow_recursion(x, y - 1));
			return (pow);
	}
}
