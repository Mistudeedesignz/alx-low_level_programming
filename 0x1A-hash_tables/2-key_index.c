/*
 * Awe Oladayo Matthew 
 */

#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index at which the key/value pair
 * should be stored in the array hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
