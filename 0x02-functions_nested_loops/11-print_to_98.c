#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: an integer
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
                        printf("%d, ", n++);
		if (n > 98)
			printf("%d, ", n--);
	}
        printf("%d\n", n);
}
