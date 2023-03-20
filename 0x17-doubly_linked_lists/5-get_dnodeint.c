#include "lists.h"

/**
 * get_dnodeint_at_index - nth node of a dlistint_t linked list
 * @head: the head node
 * @index: the position of the node
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (n < index)
	{
		head = head->next;
		n++;
	}

	return (head);
}
