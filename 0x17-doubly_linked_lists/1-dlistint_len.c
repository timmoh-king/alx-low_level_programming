#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: the head node
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
