#include "holberton.h"

/**
 * print_square - draws square in the terminal
 *
 * Return: nothing.
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
		for (height = size; height > 0; height--)
		{
			for (width = size; width > 0; width--)
				_putchar('#');
			_putchar('\n')
		}
	else
		_putchar('\n');
}
