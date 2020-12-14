#include "holberton.h"

/**
 * _islower - checks if character is in lowercase
 * @c: the character being checked
 *
 * Return: one if lower, 0 if not
 */

int _islower(int c)
{
	int letter;
	int answer;

	answer = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			answer = 1;
	}
	return (answer);
}
