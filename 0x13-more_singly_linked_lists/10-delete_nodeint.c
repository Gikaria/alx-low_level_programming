#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - The function deletes a node at a given index
 * @head: A double pointer to first node of the function
 *
 * @index: index of the node in the list
 * Return: 1 success -1 failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = *head;
	listint_t *curr_node = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr_node->next;
		free(curr_node);
		curr_node = NULL;
		return (1);
	}
	while (index != 0)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		index--;
	}
	prev_node->next = curr_node->next;
	free(curr_node);
	curr_node = NULL;
	return (1);
}
