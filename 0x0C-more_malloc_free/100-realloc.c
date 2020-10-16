#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *_realloc - reallocates mem
 *@ptr: pointer
 *@old_size: original pointer size
 *@new_size: new pointer size
 *
 *Return: reallocated pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *reallocated_pointer, *ptr_char = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size < old_size)
		old_size = new_size;
	reallocated_pointer = malloc(new_size);
	for (i = 0; i < old_size; i++)
		reallocated_pointer[i] = ptr_char[i];
	free(ptr);
	return (reallocated_pointer);
}
