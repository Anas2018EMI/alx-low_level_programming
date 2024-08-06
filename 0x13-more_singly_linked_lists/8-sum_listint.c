#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function get_nodeint_at_index goes there */
/**
 * get_nodeint_at_index - Entry point
 *
 * @head: first arg
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *ind;
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	for (ind = head; ind != NULL; ind = ind->next)
	{
		i += ind->n;
	}
	return (i);
}
