#include "holberton.h"

/**
 * _puts_recursion - prints a string using _putchar using recursion
 * @s: a string
 *
 * Returns: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
