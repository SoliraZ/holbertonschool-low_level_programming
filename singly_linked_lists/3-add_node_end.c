#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: pointer of pointer.
 * @str: String.
 *
 * Return: the adress of the new element or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*new_node_end;
	list_t	*temp;
	int	i;

	i = 0;
	new_node_end = malloc(sizeof(list_t));
	if (new_node_end == NULL)
		return (NULL);
	new_node_end->str = strdup(str);
	if (str == NULL)
	{
		free(new_node_end);
		return (NULL);
	}
	while (str[i])
		i++;
	new_node_end->len = i;
	new_node_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node_end;
	return (new_node_end);
}
