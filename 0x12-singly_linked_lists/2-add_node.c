#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning
 * @head: the first node
 * @str: the string to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int length;
	list_t *ptr;

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
	ptr->next = *head;


	*head = ptr;

	return (ptr);
}
