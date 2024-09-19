#include "lists.h"

/* betty style doc for function get_dnodeint_at_index goes there */
/**
 * get_dnodeint_at_index - Entry point
 * @head: first arg
 * @index: second arg
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head);
}
