#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: a pointer to the first node
 * @idx: the position of the node
 * @n: integer value
 *
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index
(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}

	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
