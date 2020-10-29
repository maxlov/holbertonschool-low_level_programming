#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements in a list
 * @h: head of list
 *
 * Return: # of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *scout = h;
	size_t node_count = 0;

	while (scout != NULL)
	{
		if (scout->str == NULL)
			printf("[%u] %p\n", scout->len, scout->str);
		else
			printf("[%u] %s\n", scout->len, scout->str);
		node_count++;
		scout = scout->next;
	}
	return (node_count);
}
