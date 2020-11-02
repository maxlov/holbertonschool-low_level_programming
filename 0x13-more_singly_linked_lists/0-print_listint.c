#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: head of list
 *
 * Return: # of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *scout = h;
	size_t node_count = 0;

	while (scout != NULL)
	{
		printf("%i\n", scout->n);
		node_count++;
		scout = scout->next;
	}
	return (node_count);
}
