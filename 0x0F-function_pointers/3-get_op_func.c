#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * get_op_func - Selects correct function to perform the op asked by user.
 * @s: operatio. hi kevin
 *
 * Return: NULL if s does not match expected operators
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops + i)->f != NULL)
	{
		if (*(ops + i)->op == *s)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
