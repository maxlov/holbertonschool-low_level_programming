#include "holberton.h"

/**
 * rot13 - encodes string
 * @s: string
 *
 * Return: string rotated
 */
char *rot13(char *s)
{
	int i, pos;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char nycun[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (pos = 0; alpha[pos] != '\0'; pos++)
			if (s[i] == alpha[pos])
			{
				s[i] = nycun[pos];
				break;
			}
	return (s);
}
