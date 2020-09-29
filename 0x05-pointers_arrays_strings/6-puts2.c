#include "holberton.h"

/**
 * puts2 - outputs string
 * @str: a string
 *
 * Return: length of string
 */
void puts2(char *str)
{
	int count;

	for (count = 2; *str != '\0'; str++)
	{
		if ((count % 2) == 0)
			_putchar(*str);
		count++;
	}
	_putchar('\n');
}
