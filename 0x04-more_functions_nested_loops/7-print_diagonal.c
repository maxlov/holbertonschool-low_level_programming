#include "holberton.h"

/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: size of line
 * Return: nothing.
 */

void print_diagonal(int n)
{
	int space;
	int row;

	if (n > 0)
		for (row = n; row > 0; row--)
		{
			for (space = 0; space <= (n - row); space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
