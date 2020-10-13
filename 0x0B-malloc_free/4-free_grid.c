#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - duplicated string
 * @grid: 2d grid
 * @height: number of rows
 *
 * Return: pointer to array
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}
