#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: a string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int string_length = 0;

	for (; *s != '\0'; s++)
		string_length++;
	return (string_length);
}
