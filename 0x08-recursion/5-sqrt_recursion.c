#include "holberton.h"

/**
 * sqrt_helper - returns square root of a number
 * @n: Number
 * @a: Other number being checked if sqrt
 *
 * Return: square root of number
 */

int sqrt_helper(int n, int a)
{
	if (a * a < n)
		return (sqrt_helper(n, a + 1));
	if (a * a > n)
		return (-1);
	else
		return (a);
}

/**
 * _sqrt_recursion - finds square root of number using helper function
 * @n: Number
 *
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	int a = 0, answer;

	answer = sqrt_helper(n, a);
	return (answer);
}
