#include "holberton.h"

/**
 * lower_comp - checks input for lowercase
 * @n: value
 *
 * Return: whether it is or not
 */
int lower_comp(int n)
{
	int answer = 0, i;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; lower[i] != '\0'; i++)
		if (n == lower[i])
			answer = 1;
	return (answer);
}

/**
 * seperator_comp - checks input for seperator character
 * @n: value
 *
 * Return: whether it is or not
 */
int seperator_comp(int n)
{
	int answer = 0, i;
	char seperator[] = "' ''\t''\n',;.!?\"(){}";

	for (i = 0; seperator[i] != '\0'; i++)
		if (n == seperator[i])
			answer = 1;
	return (answer);
}

/**
 * cap_string - capitilizes all words of string
 * @s: string
 *
 * Return: string capitilized
 */
char *cap_string(char *s)
{
	int i;

	if (lower_comp(s[0]) == 1)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
		if (seperator_comp(s[i - 1]) == 1 && lower_comp(s[i]) == 1)
			s[i] -= 32;
	return (s);
}
