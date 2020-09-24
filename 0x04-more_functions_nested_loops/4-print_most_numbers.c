#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 & 4 then newline.
 *
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit == 2 || digit == 4)
			continue;
		_putchar('0' + digit);
	}
	_putchar('\n');
}
