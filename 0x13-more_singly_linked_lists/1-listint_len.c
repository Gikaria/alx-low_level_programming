#include "lists.h"
#include <stdio.h>
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
		exit(0);
	while (h)
	{
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
