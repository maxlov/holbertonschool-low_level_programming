#include "holberton.h"

/**
 * _str_len_recursion
 * @s: string
 *
 * returns string length
 */

int _strlen_recursion(char *s)
{
	if (*s++)
		return (1 + _strlen_recursion(s));
	else
		return (0);
}
