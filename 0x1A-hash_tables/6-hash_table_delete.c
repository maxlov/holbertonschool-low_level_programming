#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;
	for (pos = 0; pos < ht->size; pos++)
	{
		if (ht->array[pos] == NULL)
			continue;
		current = ht->array[pos];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
