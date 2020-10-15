#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings, skipping characters in s2 past n
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to use of s2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n < size2)
		size2 = n;
	concatenate = malloc((size1 + size2 + 1) * sizeof(char));
	if (concatenate == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		concatenate[i] = s1[i];
	for (; i < (size1 + size2); i++)
		concatenate[i] = s2[i - size1];
	concatenate[i] = '\0';
	return (concatenate);
}
