#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to list
 * @head: the list
 * @n: a number
 *
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while  (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (temp);
}
