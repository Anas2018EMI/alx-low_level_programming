#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function get_nodeint_at_index goes there */
/**
 * get_nodeint_at_index - Entry point
 *
 * @head: first arg
 * @index: second arg
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ind;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (ind = head; ind != NULL; ind = ind->next)
	{
		if (i == index)
		{
			return (ind);
		}
		i++;
	}
	return (NULL);
}
