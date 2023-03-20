#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: the head node in the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
