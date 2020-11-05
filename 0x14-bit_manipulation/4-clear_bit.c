#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * clear_bit - sets specific bit to 0
 * @n: a number
 * @index: position
 *
 * Return: nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int cover = 1 << index;

	if (index >= 64)
		return (-1);
	*n = (*n & ~cover) | ((0 << index) & cover);
	return (1);
}
