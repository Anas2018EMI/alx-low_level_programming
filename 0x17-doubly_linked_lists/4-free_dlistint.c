#include "lists.h"
#include <stdlib.h>

/* betty style doc for function free_dlistint goes there */
/**
 * free_dlistint - Entry point
 * @head: first arg
 *
 * return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
