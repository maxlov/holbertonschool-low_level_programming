#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string being searched
 * @needle: string being searched for
 *
 * Return: pointer to string location
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_length;

	while (*haystack++)
	{
		needle_length = 0;
		while (*haystack == *needle)
		{
			needle_length++;
			haystack++;
			needle++;
			if (!*needle)
				return (haystack - needle_length);
		}
	}
	return (NULL);
}
