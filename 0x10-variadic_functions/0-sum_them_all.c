#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all args
 * @n: number of args
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(numlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numlist, int);
	va_end(numlist);
	return (sum);
}
