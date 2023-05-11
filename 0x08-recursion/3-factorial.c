#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial number
 * Return: factorial of @n , -1 error
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
	else
	{
		return (1);
	}
}
