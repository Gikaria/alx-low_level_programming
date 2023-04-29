#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints elements of list_t list
 * @h: list of type struct list_t
 *
 * Return: number of nodes of the string
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
