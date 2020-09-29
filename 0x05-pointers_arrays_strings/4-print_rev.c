#include "holberton.h"

/**
 * print_rev - reverses string then prints it
 * @s: a string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int str_length = 0, i;

	while (s[i++])
		str_length++;
	for (str_length = str_length - 1; str_length >= 0; str_length--)
		_putchar(*(s + str_length));
	_putchar('\n');
}
