#include "main.h"
/**
 * _sqrt - function that returns the natural square root of a number
 * @a: expected  result
 * @b: first root
 * Return: -1 on error or square root on success
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - return natural sqrt
 * @n: final root
 * Return: natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
