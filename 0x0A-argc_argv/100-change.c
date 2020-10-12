#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts number of coins needed for change
 * @argc: number of strings
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int change, coin = 0, i = 0;
	int coin_val[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	while (change > 0)
	{
		if (change >= coin_val[i])
		{
			change -= coin_val[i];
			coin++;
			i = 0;
		}
		else
			i++;
	}
	printf("%d\n", coin);
	return (0);
}
