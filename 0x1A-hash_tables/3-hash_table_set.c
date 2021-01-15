#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key. cannot be empty
 * @value: the value associated with the key
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}

	current = ht->array[index];
	for (; current != NULL; current = current->next)
		if (strcmp(current->key, (char *)key))
		{
			current->value = (char *)value;
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
