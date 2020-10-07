#include "holberton.h"

/**
 * _strlen_recursion - counts str length with recursion
 * @s: string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s++)
		return (1 + _strlen_recursion(s));
	else
		return (0);
}
