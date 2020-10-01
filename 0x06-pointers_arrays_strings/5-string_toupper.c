#include "holberton.h"

/**
 * string_toupper - changes all lowercase to upper
 * @s: string
 *
 * Return: nothing
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	return (s);
}
