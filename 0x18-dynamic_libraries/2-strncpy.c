#include "holberton.h"

/**
 * *_strncpy - copies a string into but use at most n bytes
 * @dest: a string
 * @src: a string
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
