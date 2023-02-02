#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a pointer to a function that adds new nodes
 * @head: a pointer to a head
 * @n: the integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
