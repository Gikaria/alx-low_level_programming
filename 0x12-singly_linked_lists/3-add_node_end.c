#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - returns pointer to list added node at the end
 * @head: pointer to new created list
 * @str: A string
 *
 * Return: pointer to new list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
