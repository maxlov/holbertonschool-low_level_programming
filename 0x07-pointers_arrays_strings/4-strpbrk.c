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
			return (NULL);
	return (s);
}

/**
 * _strpbrk - finds first occurance in string s of any bytes in string accept
 * @s: string
 * @accept: string with characters being checked for
 *
 * Return: pointer to memory area s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
		if (_strchr(accept, *s++))
		{
			--s;
			return (s);
		}
	return (0);
}
