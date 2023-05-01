#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - The function deletes the head node
 * and returns head node's data (n)
 *
 * @head: double pointer to head of the node
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *link, *new_h;
	int data_node;

	if (!head)
		return (0);
	link = *head;
	data_node = link->n;
	new_h = link->next;
	free(link);
	*head = new_h;
	return (data_node);
}
