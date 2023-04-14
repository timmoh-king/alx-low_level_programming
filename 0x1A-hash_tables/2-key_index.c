#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: the id of the list
 * @size: the size of array
 *
 * Return:  the index to store
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	return (hash % size);
}
