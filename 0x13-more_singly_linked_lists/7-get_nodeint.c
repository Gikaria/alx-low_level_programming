#include "lists.h"
#include <stdlib.h>
#include <unistd.h>

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
 * get_nodeint_at_index - returns the nth node of linked list
 * @head: pointer To the first node of the list
 *
 * @index: position of the node
 *
 * Return: The value on Nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int len, i;

	len = listint_len(temp);
	if (!head)
		return (NULL);

	if (index > len)
		return (NULL);

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
