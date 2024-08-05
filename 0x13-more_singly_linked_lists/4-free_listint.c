#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/* betty style doc for function free_listint goes there */
/**
 * free_listint - Entry point
 *
 * @head: first arg
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head, *ptr2;

	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr);
		ptr = ptr2;
	}
}
