#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * create_array - creates array of chars and initializes it with specific char
 * @size: size of array
 * @c: specific char to initilize with
 *
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc((size) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
