#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/* betty style doc for function free_listint2 goes there */
/**
 * free_listint2 - Entry point
 *
 * @head: first arg
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *ptr2;

	if (head == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
	*head = NULL;
}
