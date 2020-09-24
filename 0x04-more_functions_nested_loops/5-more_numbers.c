#include "holberton.h"

/**
 * more_numbers - prints the numbers 0-14 then newline.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
	int increment, digit;

	for (increment = 1; increment <= 10; increment++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar('0' + (digit / 10));
			_putchar('0' + (digit % 10));
		}
		_putchar('\n');
	}
}
