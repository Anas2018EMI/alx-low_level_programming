#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function add_nodeint goes there */
/**
 * add_nodeint - Entry point
 *
 * @head: first arg
 * @n: second arg
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
