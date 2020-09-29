#include "holberton.h"

/**
 * puts_half - prints half a string
 * @str: a string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int str_length = 0, counter = 0, number_to_skip;

	while (str[counter++])
		str_length++;
	if (str_length % 2 == 0)
		number_to_skip = str_length / 2;
	else
		number_to_skip = (str_length + 1) / 2;
	for (counter = 1; *str; str++)
	{
		if (counter > number_to_skip)
			_putchar(*str);
		counter++;
	}
	_putchar('\n');
}
