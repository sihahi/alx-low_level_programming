#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number
 * @n: int
 * @prm: int
 * Return: 0 or 1
 */

int prime(int n, int prm);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - check if n is a prime number
 * @n: int
 * @prm: int
 * Return: int
 */

int prime(int n, int prm)
{
	if (prm >= n && n > 1)
		return (1);
	else if (n % prm == 0 || n <= 1)
		return (0);
	else
		return (prime(n, prm + 1));
}
