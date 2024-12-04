#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print list.
 * @h: ...
 *
 * Return: Number of nodes.
 */

size_t	print_list(const list_t *h)
{
	int	i;
	const list_t *current;

	i = 0;
	current = h;
	while (current != NULL)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}
	return (i);
}
