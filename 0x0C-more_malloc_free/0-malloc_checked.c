#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: how much memory to allocate
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = (void *)malloc(b);
	if (pointer == NULL)
	{
		free(pointer);
		exit(98);
	}
	return (pointer);
}
