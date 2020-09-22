#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet then newline.
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
	int character;
	char alphabet[] = "abcdefghijklmnopqrz\n";

	for (character = 0; alphabet[character] != '\0'; character++)
		_putchar(alphabet[character]);
}
