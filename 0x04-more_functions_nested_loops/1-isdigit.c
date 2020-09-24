#include "holberton.h"

/**
 * _isdigit - checks if character is a digit 0-9
 * @c: number
 *
 * Return: 1 if digit 0 if otherwise
 */

int _isdigit(int c);
{
	int output, number;

	output = 0;
	for (number = 0; number <= 9; number++)
		if (number == c)
			output = 1;
	return (output);
}
