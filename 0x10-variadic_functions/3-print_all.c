#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * fmt_len - finds length of format
 * @format: list of flags
 *
 * Return: format length
 */

unsigned int fmt_len(const char * const format)
{
	int i = 0, format_length = 0;

	while (*(format + i++))
		format_length++;
	return (format_length);
}

/**
 * print_all - prints everything
 * @format: list of flags
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, len = 0, flag = 0;
	char *hold;
	va_list valist;

	len = fmt_len(format);
	va_start(valist, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			hold = va_arg(valist, char *);
			if (hold == NULL)
			{
				printf("%p", hold);
				break;
			}
			printf("%s", hold);
			break;
		default:
			flag = 1;
			break;
		}
		if (i < len - 1 && flag == 0)
			printf(", ");
		flag = 0;
		i++;
	}
	printf("\n");
	va_end(valist);
}
