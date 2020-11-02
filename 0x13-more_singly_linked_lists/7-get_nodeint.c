#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns node at given index
 * @head: the list
 * @index: index of the node starting at 0
 *
 * Return: Address of new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int current_index = 0;

	current = head;
	while (current->next != NULL)
	{
		current_index++;
		current = current->next;
		if (current_index == index)
			return (current);
	}
	return (NULL);
}
