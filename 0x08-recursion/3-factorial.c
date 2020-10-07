#include "holberton.h"

/**
 * factorial - returns factorial of a number
 * @n: an integer
 *
 * Return: factorial of n or -1 if negative number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
