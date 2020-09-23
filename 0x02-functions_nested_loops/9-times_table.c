#include "holberton.h"

/**
 *times_table - prints times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int x, y, ones, tens;

	x = 0;
	for (y = 0; y < 10; y++)
	{
		_putchar('0');
		for (x = 1; x < 10; x++)
		{
			_putchar(',');
			_putchar(' ');
			tens = ((x * y) / 10);
			ones = ((x * y) % 10);
			if ((x * y) < 10)
			{
				_putchar(' ');
				_putchar('0' + ones);
			}
			else
			{
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
		}
		_putchar('\n');
	}
}
