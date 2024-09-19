#include "lists.h"
#include <stdlib.h>

/* betty style doc for function add_dnodeint goes there */
/**
 * add_dnodeint - Entry point
 * @head: first arg
 * @n: second arg
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
