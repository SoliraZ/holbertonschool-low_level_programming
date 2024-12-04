#include "lists.h"

/**
 * list_len - List length of linked list.
 * @h: ...
 *
 * Return: Number of elements in a linked lists_t list.
 */

size_t list_len(const list_t *h)
{
	int	i;
	const list_t *current;

	i = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
