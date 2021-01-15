#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: Created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		free(ht);
		return (NULL);
	}
	ht->size = size;
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
