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
	int i, j, number_of_bytes;

	for (i = 0; s[i] != ','; i++)
		for (j = 0; *(accept + j); j++)
			if (s[i] == accept[j])
				number_of_bytes++;
	return (number_of_bytes);
}
