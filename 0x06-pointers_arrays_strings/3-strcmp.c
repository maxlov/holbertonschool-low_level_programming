#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (15);
		if (s2[i] > s1[i])
			return (-15);
		if (s2[i] < s1[i])
			return (15);
		i++;
	}
	if (s2[i] != '\0')
		return (-15);
	return (0);
}
