#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	concatenate = malloc((size1 + size2) * sizeof(char));
	if (concatenate == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		concatenate[i] = s1[i];
	for (; i < (size1 + size2); i++)
		concatenate[i] = s2[i - size1];
	return (concatenate);
}
