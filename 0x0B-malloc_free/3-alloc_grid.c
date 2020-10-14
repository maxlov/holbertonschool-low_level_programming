#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - duplicated string
 * @width: # of columns
 * @height: # of rows
 *
 * Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		arr[c] = malloc(width * sizeof(int));
		if (arr[c] == NULL)
		{
			for (c = 0; c < height; c++)
				free(arr[c]);
			free(arr);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			arr[c][i] = 0;
	}
	return (arr);
}
