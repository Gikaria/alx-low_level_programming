#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: pointer to the list
 *
 * Return: NUll after free
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	if (!head)
	{
		return;
	}
	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node);
	}
}
