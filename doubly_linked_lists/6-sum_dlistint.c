#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of the list
 */

int	sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int	result = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		result = result + current->n;
		current = current->next;
	}
	return (result);
}
