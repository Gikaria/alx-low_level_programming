#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function thta return a new node
 * @head: a pointer to pointer of struct listint_t
 * @n:elemenys of the list
 *
 * Return: head pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *link;

	link = malloc(sizeof(listint_t));
	if (!link)
		return (NULL);
	link->n = n;
	link->next = *head;
	*head = link;
	return (*head);
}
