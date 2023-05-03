#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns number of elements in the list
 * @h: pointer to the node
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes;

	count_nodes = 0;
	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
/**
 * insert_nodeint_at_index - The function inserts a node at a given position
 * @head: Double pointer to head of the linked list
 * @idx: The positions to add new node
 * @n: Value to add on idex position
 *
 * Return: node with new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *node, *prev_node = NULL;
	unsigned int len, j = 0;

	len = listint_len(temp);
	if (*head == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (node && idx < len)
	{
		if (idx == j)
		{
			prev_node->next = node;
			node->next = temp;
			return (node);
		}
		prev_node = temp;
		temp = temp->next;
		j++;
	}

	free(node);
	return (NULL);
}
