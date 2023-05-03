#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns sum of data(n)elements in linked list
 * @head: pointer to head of the linked list
 *
 * Return: sum of data elements in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i = 0;
	listint_t *new_node = head;

	if (!head)
		return (0);
	for (; new_node != NULL; i++)
	{
		sum += new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
