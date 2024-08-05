#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function add_nodeint_end goes there */
/**
 * add_nodeint_end - Entry point
 *
 * @head: first arg
 * @n: second arg
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ind;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		for (ind = *head; ind != NULL; ind = ind->next)
		{
			if (ind->next == NULL)
			{
				ind->next = ptr;
				break;
			}
		}
	}

	return (ptr);
}
