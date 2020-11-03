#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - adds node to list
 * @head: the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *thead;

	if (head == NULL)
		return;
	thead = *head;
	while (thead != NULL)
	{
		temp = thead->next;
		free(thead);
		thead = temp;
	}
	*head = NULL;
}
