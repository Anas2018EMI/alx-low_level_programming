#include "lists.h"

/* betty style doc for function dlistint_len goes there */
/**
 * dlistint_len - Entry point
 * @h: first arg
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
