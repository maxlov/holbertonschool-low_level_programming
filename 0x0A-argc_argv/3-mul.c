#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two given numbers
 * @argc: number of strings called
 * @argv: pointer to words
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
