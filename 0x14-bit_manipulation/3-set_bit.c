#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - sets specific bit to 1
 * @n: a number
 * @index: position
 *
 * Return: nothing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int cover = 1 << index;

	if (index >= 64)
		return (-1);
	*n = (*n & ~cover) | ((1 << index) & cover);
	return (1);
}
