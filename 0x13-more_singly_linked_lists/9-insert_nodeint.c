#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function insert_nodeint_at_index goes there */
/**
 * insert_nodeint_at_index - Entry point
 *
 * @head: first arg
 * @idx: second arg
 * @n: third arg
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ind, *ptr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	for (ind = *head; ind != NULL; ind = ind->next)
	{
		if (i == idx)
		{
			ptr = malloc(sizeof(listint_t));
			if (ptr == NULL)
				return (NULL);
			ptr->n = ind->n;
			ptr->next = ind->next;
			ind->n = n;
			ind->next = ptr;
			return (ind);
		}
		i++;
	}
	return (NULL);
}
