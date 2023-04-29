#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function pointer to function adding node
 * @head: double pointer for list nodes
 * @str: a string
 *
 * Return: list_t with added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t i;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;

	temp->len = i;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
