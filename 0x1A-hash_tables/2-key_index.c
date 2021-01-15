#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - uses hash_djb2 to generate index of a key
 * @key: the key
 * @size: size of the array in hash table
 * Return: Created hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
