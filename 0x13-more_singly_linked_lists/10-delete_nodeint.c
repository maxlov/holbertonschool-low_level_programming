#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_start - deletes head of list
 * @head: the list
 *
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_start(listint_t **head)
{
	listint_t *temp, *thead;

	if (*head == NULL)
		return (-1);
	temp = *head;
	thead = temp->next;
	free(temp);
	*head = thead;
	return (1);
}

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

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (current_index == index)
			return (current);
		current_index++;
		current = current->next;
	}
	return (NULL);
}

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: the list
 * @index: the index
 *
 * Return: data stored at index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head, *current, *temp;

	if (index == 0)
		return (delete_nodeint_at_start(head));
	temp_head = *head;
	temp = get_nodeint_at_index(temp_head, index);
	current = get_nodeint_at_index(temp_head, index - 1);
	if (current == NULL || temp == NULL)
		return (-1);
	current->next = current->next->next;
	free(temp);
	return (1);
}
