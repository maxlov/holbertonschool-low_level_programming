#include "holberton.h"

/**
 * _strchr - returns pointer to the first occur
 * @s: pointer
 * @c: character
 *
 * Return: string at character
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}
