#include "holberton.h"

/**
 * print_numbers - prints the numbers 0-9 then newline.
 *
 * Return: nothing.
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		_putchar('0' + digit);
	_putchar('\n');
}
