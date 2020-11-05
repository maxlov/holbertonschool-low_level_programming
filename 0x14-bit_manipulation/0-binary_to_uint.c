#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_unit - converts binary # to unsigned dec
 * @b: string
 *
 * Return: Converted number or 0 if failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned dec = 0, pos = 0;
	int len = 0;

	if (b == NULL)
		return (0);
	for (; *(b + pos) != '\0'; pos++)
	{
		if (*(b + pos) != '1' && *(b + pos) != '0')
			return (0);
		len++;
	}
	for (pos = 1; len >= 0; len--)
	{
		if (*(b + len) == '1')
			dec += pos;
		pos = pos * 2;
	}
	return (dec / 2);
}
