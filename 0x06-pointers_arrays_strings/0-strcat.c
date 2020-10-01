#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int str_length = 0, i = 0;

	while (dest[i++])
		str_length++;
	for (i = 0; src[i]; i++)
		dest[str_length + i] = src[i];
	dest[str_length + i] = '\0';
	return (dest);
}
