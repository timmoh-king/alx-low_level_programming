#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: the head node in the list
 * @n: the integer to be passed
 *
 * Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = newnode;
		newnode->prev = tail;
	}

	return (newnode);
}
