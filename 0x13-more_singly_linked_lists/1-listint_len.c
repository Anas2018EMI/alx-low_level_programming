#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function listint_len goes there */
/**
 * listint_len - Entry point
 *
 * @h: first arg
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		i++;
	}
	return (i);
}
