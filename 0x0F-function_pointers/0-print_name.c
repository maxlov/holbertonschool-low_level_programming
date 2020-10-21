#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - points to called function
 * @name: string
 * @f: function being called
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
