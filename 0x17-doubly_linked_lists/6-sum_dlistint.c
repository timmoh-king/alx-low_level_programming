#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of linked list
 * @head: the head node
 *
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
