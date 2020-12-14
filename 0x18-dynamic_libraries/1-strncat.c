#include "holberton.h"

/**
 * *_strncat - concatenates two strings but use at most n bytes
 * @dest: a string
 * @src: a string
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_length = 0, i = 0;

	while (dest[i++])
		str_length++;
	for (i = 0; i < n && src[i]; i++)
		dest[str_length + i] = src[i];
	dest[str_length + i] = '\0';
	return (dest);
}
