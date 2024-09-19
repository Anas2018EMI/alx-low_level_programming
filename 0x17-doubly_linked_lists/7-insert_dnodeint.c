#include "lists.h"
#include <stdlib.h>

/* betty style doc for function insert_dnodeint_at_index goes there */
/**
 * insert_dnodeint_at_index - Entry point
 * @h: first arg
 * @idx: second arg
 * @n: third arg
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; current != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));

			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->prev = current;
			new_node->next = current->next;
			current->next->prev = new_node;
			current->next = new_node;

			return (new_node);
		}
		current = current->next;
	}

	return (NULL);
}
