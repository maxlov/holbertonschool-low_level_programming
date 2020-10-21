#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer based on given param
 * @array: array of numbers
 * @size: number of elems in array
 * @cmp: pointer to which func to use
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
