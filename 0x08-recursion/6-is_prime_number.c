#include "main.h"
/**
 * _prime -check for prime numbers
 * @a: input
 * @b: The divisor
 * Return: 0 on success
 */
int _prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (_prime(a, b + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer
 * Return: 0 on success
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
