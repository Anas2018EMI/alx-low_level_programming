#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
/* betty style doc for function list_len goes there */
/**
 * list_len - Entry point
 *
 * @h: first arg
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		i++;
	}
	return (i);
}
