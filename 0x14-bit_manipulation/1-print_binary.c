#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints binary version of a dec
 * @n: a number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		putchar(1 + '0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
