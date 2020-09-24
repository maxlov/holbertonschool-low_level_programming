#include "holberton.h"

/**
 * print_line - draws straight line in the terminal
 * @n: number of lines
 * Return: nothing.
 */

void print_line(int n)
{
	if (n > 0)
		for (; n > 0; n--)
			_putchar('_');
	_putchar('\n');
}
