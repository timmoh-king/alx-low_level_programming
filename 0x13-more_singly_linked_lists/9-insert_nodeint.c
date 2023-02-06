#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: a pointer to the first node
 * @idx: the position of the node
 * @n: integer value to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	/*while (i < idx)
	{
		temp = temp->next;
		i++;
	}*/

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
