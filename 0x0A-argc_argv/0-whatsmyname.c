#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of strings called
 * @argv: pointer to words
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
