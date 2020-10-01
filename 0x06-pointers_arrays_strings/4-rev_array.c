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
	int pos, temp;

	pos = 0;
	while (pos <= n)
	{
		n--;
		temp = a[pos];
		a[pos] = a[n];
		a[n] = temp;
		pos++;
	}
}
