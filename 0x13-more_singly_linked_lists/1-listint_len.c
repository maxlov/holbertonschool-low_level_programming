#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts number of elements in a list
 * @h: head of list
 *
 * Return: # of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *scout = h;
	size_t node_count = 0;

	while (scout != NULL)
	{
		node_count++;
		scout = scout->next;
	}
	return (node_count);
}
