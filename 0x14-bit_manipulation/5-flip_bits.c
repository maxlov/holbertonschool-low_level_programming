#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * flip_bits - counts how many bits to flip for n to equal m
 * @n: a number
 * @m: another number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			bits++;
		m = m >> 1;
		n = n >> 1;
	}
	return (bits);
}
