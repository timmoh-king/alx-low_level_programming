#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	if (head == NULL || *head == NULL)
		return (NULL);

	prevnode = NULL;

	while ((*head)->next != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}

	(*head)->next = prevnode;

	return (*head);
}
