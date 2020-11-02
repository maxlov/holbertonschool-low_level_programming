#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds node to list
 * @head: the list
 * @n: a number
 *
 * Return: Address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->n = n
	new->next = *head;
	*head = new;
	return (*head);
}
