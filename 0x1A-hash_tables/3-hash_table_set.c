#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int hash = key_index((unsigned char *)key, ht->size);
	hash_node_t *new = malloc(sizeof(hash_node_t)), *head = NULL;

	if (new == 0)
		return (0);

	/*if the key exists*/
	head = ht->array[hash];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			head->value = strdup(value);
		head = head->next;
	}

	/*if key does not exist*/
	ht->array[hash] = new;
	ht->size++;

	return (1);
}
