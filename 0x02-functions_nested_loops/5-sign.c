#include "holberton.h"

/**
 * print_sign - prints sign of number
 * @n: the number
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	int answer;

	if (n > 0)
	{
		answer = 1;
		_putchar('+');
	}
	if (n == 0)
	{
		answer = 0;
		_putchar('0');
	}
	if (n < 0)
	{
		answer = -1;
		_putchar('-');
	}
	return (answer);
}
