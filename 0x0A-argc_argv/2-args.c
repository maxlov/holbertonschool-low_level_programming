B#include <stdio.h>

/**
 * main - prints number of arguments passed into program
 * @argc: number of strings called
 * @argv: pointer to words
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
		printf("%s\n", *argv++);
	return (0);
}
