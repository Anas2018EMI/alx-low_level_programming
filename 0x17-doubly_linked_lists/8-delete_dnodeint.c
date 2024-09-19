#include "lists.h"
#include <stdlib.h>

/* betty style doc for flip_bits delete_dnodeint_at_index goes there */
/**
 * delete_dnodeint_at_index - Entry point
 * @head: first arg
 * @index: second arg
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		if (i == index - 1)
		{
			if (current->next == NULL)
				return (-1);

			temp = current->next;
			current->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = current;
			free(temp);
			return (1);
		}
		current = current->next;
	}

	return (-1);
}
