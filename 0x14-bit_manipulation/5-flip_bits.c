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
	unsigned int bits = 0, difference = (n ^ m);

	while (difference > 0)
	{
		bits++;
		difference &= (difference - 1);
	}
	return (bits);
}
