#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function  pop_listint goes there */
/**
 *  pop_listint- Entry point
 *
 * @head: first arg
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	ptr = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (i);
}
