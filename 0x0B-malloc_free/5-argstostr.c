#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: string of all arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, pos = 0;
	char *all_args;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
	all_args = malloc((total_length + ac) * sizeof(char));
	if (all_args == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			all_args[pos] = av[i][j];
			pos++;
		}
		all_args[pos] = '\n';
		pos++;
	}
	all_args[pos] = '\0';
	return (all_args);
}
