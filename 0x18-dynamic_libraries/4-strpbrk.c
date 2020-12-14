#include "holberton.h"
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
