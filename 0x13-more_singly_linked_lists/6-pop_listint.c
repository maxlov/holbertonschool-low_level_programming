#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes head of list
 * @head: the list
 *
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *thead;

	if (*head == NULL)
		return (0);
	temp = *head;
	thead = temp->next;
	n = temp->n;
	free(temp);
	*head = thead;
	return (n);
}
