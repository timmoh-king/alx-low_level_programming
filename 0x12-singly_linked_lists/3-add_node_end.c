#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the first element
 * @str: duplicated string
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	char *dup;
	list_t *ptr, *last;

	length = strlen(str);
	dup = strdup(str);

	if (dup == NULL)
		return (NULL);

	ptr = (list_t *)malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->str = dup;
	ptr->len = length;
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
