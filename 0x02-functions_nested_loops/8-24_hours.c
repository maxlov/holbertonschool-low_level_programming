#include "holberton.h"

/**
 * jack_bauer - prints every mnute of a day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int min_ten, min_one, sec_ten, sec_one;

	for(min_ten = 0; min_ten < 3; min_ten++)
	{
		for(min_one = 0; min_one < 10; min_one++)
		{
			for(sec_ten = 0; sec_ten < 6; sec_ten++)
			{
				for(sec_one = 0; sec_one < 10; sec_one++)
				{
					if ((min_ten == 2) && (min_one > 3))
					    continue;
					_putchar('0' + min_ten);
					_putchar('0' + min_one);
					_putchar(':');
					_putchar('0' + sec_ten);
					_putchar('0' + sec_one);
					_putchar('\n');
				}
			}
		}
	}
}
