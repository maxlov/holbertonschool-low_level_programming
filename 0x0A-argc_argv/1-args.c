#include <stdio.h>

/**
 * main - prints number of arguments passed into program
 * @argc: number of strings called
 * @argv: pointer to words
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", --argc);
	return (0);
}
