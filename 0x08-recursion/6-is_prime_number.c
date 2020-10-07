#include "holberton.h"

/**
 * prime_helper - checks for prime
 * @n: Number
 * @a: Another number
 *
 * Return: 1 or 0 if prime or not
 */

int prime_helper(int n, int a)
{
	if (n % a == 0)
		return (0);
	if (a > n / 2)
		return (1);
	return (prime_helper(n, a + 1));
}

/**
 * is_prime_number - checks for prime with helper
 * @n: Number
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int a = 2, answer;

	if (n < 2)
		return (0);
	answer = prime_helper(n, a);
	return (answer);
}
