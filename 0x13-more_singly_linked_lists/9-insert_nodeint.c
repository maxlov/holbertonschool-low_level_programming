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

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: the list
 * @idx: index
 * @n: a number
 *
 * Return: Address of new node or NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_head, *current, *temp, *new;

	temp_head = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = get_nodeint_at_index(temp_head, idx);
	current = get_nodeint_at_index(temp_head, idx - 1);
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	current->next = new;
	new->next = temp;
	return (new);
}
