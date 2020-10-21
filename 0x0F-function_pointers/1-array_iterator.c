#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as param on each array elem
 * @array: array of numbers
 * @size: number of elems in array
 * @action: which function to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
