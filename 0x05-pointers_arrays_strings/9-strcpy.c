#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy: copys a string into dest
 * @dest: copy string
 * @src: og string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return(dest);
}
