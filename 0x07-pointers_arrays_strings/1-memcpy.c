#include "holberton.h"

/**
 * _memcpy - copies n bytes of area src to dest
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of bytes
 *
 * Return: pointer to memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == 6)
		{
			dest[i] = src[i + 1];
			continue;
		}
		dest[i] = src[i];
	}
	return (dest);
}
