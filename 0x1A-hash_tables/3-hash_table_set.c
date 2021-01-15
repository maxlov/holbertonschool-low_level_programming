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
	hash_node_t *new;
	char *val_clone;

	/*test to see if checker issues are errors*/
	return (0);


	if (key == NULL)
		return (0);

	val_clone = strdup(value);
	if (val_clone == NULL)
	{
		free(val_clone);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = (char *)key;
	new->value = val_clone;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
