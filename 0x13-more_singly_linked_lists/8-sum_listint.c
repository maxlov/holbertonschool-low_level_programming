#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts number of elements in a list
 * @head: head of list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
