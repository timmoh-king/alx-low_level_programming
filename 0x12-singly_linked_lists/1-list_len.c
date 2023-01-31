#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the length of the list
 *
 * Return: number  of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		el++;
		h = h->next;
	}
	return (el);
}
