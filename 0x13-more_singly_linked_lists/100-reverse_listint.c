#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses the linked list
 * @head: double pointer to the linked list
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL;
	listint_t *prev = NULL;

	if (!*head)
		return (NULL);
	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = curr;
	}

	*head = prev;
	return (*head);
}
