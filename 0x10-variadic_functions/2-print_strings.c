#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @seperator: character to seperate by
 * @n: number of args
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;

	va_start(string_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%p", va_arg(string_list, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
