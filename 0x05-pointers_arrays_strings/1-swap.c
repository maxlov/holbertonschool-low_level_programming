#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int a_hold, b_hold;

	a_hold = *a;
	b_hold = *b;
	*a = b_hold;
	*b = a_hold;
}
