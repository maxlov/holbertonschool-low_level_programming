#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from the hash table
 * @ht: the hash table
 * @key: the key
 * Return: Element on success or null on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	current = ht->array[index];
	while (1)
	{
		if (strcmp((char *)key, current->key) == 0)
			return (current->value);
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (NULL);
}
