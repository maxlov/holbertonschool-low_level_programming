#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: a string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = -1;
	int pos;
	char temp;
	char *copy = s;

	pos = 0;
	while (*copy++)
		length++;
	while (pos <= length)
	{
		temp = s[pos];
		s[pos] = s[length];
		s[length] = temp;
		pos++;
		length--;
	}
}
