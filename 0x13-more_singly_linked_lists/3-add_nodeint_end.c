#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a pointer to a function that adds end node
 * @head: a pointer to the first element of the list
 * @n: the integer character to be passed
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *last;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}
	return (ptr);
}
