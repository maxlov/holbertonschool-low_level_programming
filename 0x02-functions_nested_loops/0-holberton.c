#include "holberton.h"

/**
 * main - uses _putchar to print hoblerton.
 *
 * Return: Always 0.
 */
int main(void)
{
	char holberton[] = "Holberton\n";
	int n;

	for (n = 0; holberton[n] != '\0'; n++)
	{
	_putchar(holberton[n]);
	}
	return (0);
}
