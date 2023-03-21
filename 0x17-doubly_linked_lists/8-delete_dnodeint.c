#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given idx
 * @head: the head node
 * @index: the given position
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tail;
	unsigned int pos = 1;

	if (*head == NULL)
		return (-1);

	if (index < 1)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = 0;
		free(temp);
	}

	while (index < pos)
	{
		temp = *head;
		temp = temp->next;
		index++;
	}

	if (temp->next == NULL)
	{
		temp = tail;
		tail->prev->next = 0;
		free(temp);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}
