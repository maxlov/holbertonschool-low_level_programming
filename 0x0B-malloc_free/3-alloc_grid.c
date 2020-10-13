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
	int i, j, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	for (c = 0; c <= width; c++)
		arr[c] = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
