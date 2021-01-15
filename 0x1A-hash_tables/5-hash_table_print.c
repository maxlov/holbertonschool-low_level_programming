#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos, i = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (pos = 0; pos < ht->size; pos++)
	{
		if (ht->array[pos] == NULL)
			continue;
		current = ht->array[pos];
		while (1)
		{
			if (i == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", current->key, current->value);
			i = 1;
			if (current->next == NULL)
				break;
			current = current->next;
		}
	}
	printf("}\n");
}
