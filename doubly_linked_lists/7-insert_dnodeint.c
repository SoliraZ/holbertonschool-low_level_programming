#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer to be included in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node;
	dlistint_t *new_node;
	unsigned int i;

	i = 0;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	prev_node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < (idx - 1))
	{
		if (prev_node == NULL)
			return (NULL);
		prev_node = prev_node->next;
		i++;
	}
	if (prev_node->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->n = n;
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	prev_node->next->prev = new_node;
	prev_node->next = new_node;
	return (new_node);
}
