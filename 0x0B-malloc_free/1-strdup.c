#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strdup - duplicated string
 * @str: original string
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int size = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	duplicate = malloc((size + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';
	return (duplicate);
}
