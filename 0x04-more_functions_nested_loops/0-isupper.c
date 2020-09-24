#include "holberton.h"

/**
 * _isupper - checks if character is upper
 * @c: character
 *
 * Return: 1 if upper 0 if otherwise
 */

int _isupper(int c)
{
	int output, character;

	output = 0;
	for (character = 'A'; character == 'Z'; character++)
		if (character == c)
			output = 1;
	return (output);
}
