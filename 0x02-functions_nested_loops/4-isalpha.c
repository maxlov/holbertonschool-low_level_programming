#include "holberton.h"

/**
 * _isalpha - checks if character is in alphabet
 * @c: the character being checked
 *
 * Return: one if alphabetic, 0 if not
 */

int _isalpha(int c)
{
	int letter;
	int answer;

	answer = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
			answer = 1;
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
			answer = 1;
	}
	return (answer);
}
