#include "holberton.h"

/**
 * print_triangle - triangle in the terminal
 * @size: size of triangle
 * Return: nothing.
 */

void print_triangle(int size)
{
	int space, pound, row;

	if (size > 0)
		for (row = 1; row <= size; row++)
		{
			for (space = (size - row); space > 0; space--)
				_putchar(' ');
			for (pound = 1; pound <= row; pound++)
				_putchar('#');
			_putchar('\n');
		}
	else
		 _putchar('\n');
}
