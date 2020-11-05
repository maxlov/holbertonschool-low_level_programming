#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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

	if (index >= 64)
		return (-1);
	return (bit & 1);
}
