#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t lit
 * @head: first node in listint_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
