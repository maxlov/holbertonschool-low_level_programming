/**
 * main - prints a line with system echo
 * Return: returns 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char command[100];

	strcpy(command, "echo 'and that piece of art is useful\" \
- Dora Korpar, 2015-10-19'");
	system(command);
	return (0);
}
