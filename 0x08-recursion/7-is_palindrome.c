#include <stdio.h>

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

/**
 * palindrome_helper - finds if palindrome or not
 * @s: string
 * @pos1: start
 * @pos2: end
 *
 * Return: 1 if palindrome or 0 if otherwise
 */

int palindrome_helper(char *s, int pos1, int pos2)
{
	if (pos1 >=  pos2)
		return (1);
	if (s[pos1] != s[pos2])
		return (0);
	else
		return (palindrome_helper(s, pos1 + 1, pos2 - 1));
}

/**
 * is_palindrome - finds if palindrome using helper
 * @s: a string
 *
 * Return: 1 if palindrome or 0 if otherwise
 */

int is_palindrome(char *s)
{
	int end;

	end = _strlen_recursion(s);
	if (end == 0)
		return (1);
	return (palindrome_helper(s, 0, end - 1));
}
