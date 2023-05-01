#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - The function print int elements and
 * returns number of nodes
 *
 * @h: a pointer to a node
 *
 * Return: number of noes in the listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;

	while (h != NULL)
	{
		if (!h->n)
		{
			printf("[%d]\n", 0);
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
