#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates answer from args
 * @argc: number of args
 * @argv: array of args
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int result, n1, n2;
	char symbol;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	symbol = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (((symbol == '/') || (symbol == '%')) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(n1, n2);
	printf("%d\n", result);
	return (0);
}
