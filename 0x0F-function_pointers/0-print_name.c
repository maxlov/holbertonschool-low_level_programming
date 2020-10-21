#include <stdio.h>
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
	(*f)(name);
}
