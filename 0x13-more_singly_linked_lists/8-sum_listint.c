#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function  sum_listint goes there */
/**
 *  sum_listint- Entry point
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
