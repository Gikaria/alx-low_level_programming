#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the lists  and returns makes
 * Head point to NULL
 * @head: Doubel pointer to the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *link, *temp;

	link = *head;
	while (link)
	{
		temp = link;
		link = link->next;
		free(temp);
	}
	*head = NULL;
}
