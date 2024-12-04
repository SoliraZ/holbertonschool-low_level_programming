#include "lists.h"
#include <string.h>

/**
 * add_node - Add new node at the beginning of a list_t list.
 * @head: pointer of pointer
 * @str: const char pointer
 *
 * Return: the adress of the new element or NULL.
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int	i;

	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i])
		i++;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
