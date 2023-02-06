#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: a pointer to the first node
 * @index: the position of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *nextnode, *temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
