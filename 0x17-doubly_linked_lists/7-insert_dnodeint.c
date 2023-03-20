#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given pos
 * @h: the head node
 * @idx: the position of the node
 * @n: the integer value
 *
 * Return: the newnode or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	newnode->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
