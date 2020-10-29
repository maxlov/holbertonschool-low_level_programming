#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to list
 * @head: the list
 * @str: a string
 *
 * Return: Address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
        int len = 0;

        while (*(str + len))
                len++;
        new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);
        new->str = strdup(str);
        new->len = len;
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
