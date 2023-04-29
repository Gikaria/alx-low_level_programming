#include "lists.h"
#include <stdlib.h>
/**
 * list_len - functions thta returns number of elements in the linked list
 * @h: list of type struct list_t
 *
 * Return: count number of elemnts in the list_t
 */
size_t list_len(const list_t *h)
{
	size_t list_count;

	list_count = 0;
	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		list_count++;
	}
	return (list_count);
}
