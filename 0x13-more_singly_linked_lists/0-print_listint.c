#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function print_listint goes there */
/**
 * print_listint - Entry point
 *
 * @h: first arg
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%i\n", ptr->n);
		i++;
	}
	return (i);
}
