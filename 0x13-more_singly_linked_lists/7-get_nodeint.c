#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get nth node of a listint_t linked list
 * @head: a pointer to the first node
 * @index: the position of our node
 *
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (0);

	while (n < index)
	{
		head = head->next;
		n++;
	}

	return (head);
}
