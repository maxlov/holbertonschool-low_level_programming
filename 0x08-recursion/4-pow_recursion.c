#include "holberton.h"

/**
 * _pow_recursion - returns x to power y
 * @x: int
 * @y: int
 *
 * Return: x to power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
