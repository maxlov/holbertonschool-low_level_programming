#include "holberton.h"
#include <stdio.h>

/**
 * main - prints 1 - 100 but FizzBuzz
 *
 * Return: 0
 */

int main (void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			printf(" ");
			continue;
		}
		printf("%d ", n);
	}
	printf("\n");
	return (0);
}
