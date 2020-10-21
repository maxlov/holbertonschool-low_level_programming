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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	result = get_op_func(argv[2])(n1, n2);
	printf("%d\n", result);
	return (0);
}
