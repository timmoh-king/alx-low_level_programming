#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the length of the list
 *
 * Return: number  of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		el++;
		h = h->next;
	}
	return(el);
}
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    list_t *head;
	        list_t *new;
		    list_t hello = {"World", 5, NULL};
		        size_t n;

			    head = &hello;
			        new = malloc(sizeof(list_t));
				    if (new == NULL)
					        {
							        printf("Error\n");
								        return (1);
									    }
				        new->str = strdup("Hello");
					    new->len = 5;
					        new->next = head;
						    head = new;
						        n = list_len(head);
							    printf("-> %lu elements\n", n);
							        free(new->str);
								    free(new);
								        return (0);
}
