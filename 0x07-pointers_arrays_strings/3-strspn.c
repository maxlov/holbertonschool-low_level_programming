#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: string with characters being checked for
 *
 * Return: pointer to memory area s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, number = 0, prev_number = -1;

	for (i = 0; s[i] && number != prev_number; i++)
	{
		for (j = 0; *(accept + j); j++)
			if (s[i] == accept[j])
				number++;
		prev_number++;
	}
		return (number);
}
