#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _log2 - finds log2 of number
 * @n: a number
 *
 * Return: answer
 */
unsigned int _log2(unsigned int n)
{
	if (n > 1)
		return (1 + _log2(n / 2));
	else
		return (0);
}

/**
 * get_bit - gets bit at position index
 * @n: a number
 * @index: position
 *
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = n >> index;

	if ((_log2(n) + 1) < index)
		return (-1);
	return (bit & 1);
}
