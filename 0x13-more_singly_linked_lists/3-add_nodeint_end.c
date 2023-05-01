#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function returns head with new added node
 * @head: pointer to a pointer of a node
 * @n: integer elements of the list
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *link;
	listint_t *adj_node;

	link = malloc(sizeof(listint_t));
	if (!link)
		return (NULL);

	link->n = n;
	link->next = NULL;
	adj_node = (*head);

	if (*head == NULL)
	{
		*head = link;/* if head is null then it should point to list */
	}
	else
	{
		while (adj_node->next != NULL)
		{
			adj_node = adj_node->next; /* Transverse through th entire list till NULL */
		}
		adj_node->next = link;
	}
	return (*head);
}
