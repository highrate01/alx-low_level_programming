#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 * @x: int value
 * @y: reps value of raise to power
 * Return: raise to power of an int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
	{
		return (-1);
	}
	return (x *  _pow_recursion(x, y - 1));
}
