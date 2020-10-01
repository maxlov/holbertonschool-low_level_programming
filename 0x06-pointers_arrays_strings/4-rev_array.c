#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: int
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int pos, temp, end;

	pos = 0;
	end = n;
	while (pos <= end)
	{
		end--;
		temp = a[pos];
		a[pos] = a[end];
		a[end] = temp;
		pos++;
	}
}
