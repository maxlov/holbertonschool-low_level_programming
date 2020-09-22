#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet then newline.
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
	int ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
