#include "holberton.h"

/**
 * _puts - outputs string
 * @str: a string
 *
 * Return: length of string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
