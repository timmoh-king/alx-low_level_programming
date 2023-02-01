#include "lists.h"

/**
 * listint_len - returns the number of elements on the list
 * @h: pointer to the list head
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}

	return (node);
}
