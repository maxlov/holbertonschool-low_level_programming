#include "holberton.h"

/**
 * leet - turns not elite to LEET
 * @s: string
 *
 * Return: string 1337ilized
 */
char *leet(char *s)
{
	int i, pos;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (pos = 0; letters[pos] != '\0'; pos++)
			if (s[i] == letters[pos])
				s[i] = numbers[pos];
	return (s);
}
