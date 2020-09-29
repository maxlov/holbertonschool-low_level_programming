#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements in an array of integers
 * @a: an array
 * @n: number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int pos = 0;

	while (pos < n)
	{
		printf("%d", a[pos]);
		if (pos < n - 1)
			printf(", ");
		pos++;
	}
	printf("\n");
}
