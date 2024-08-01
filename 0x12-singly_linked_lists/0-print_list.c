#include "lists.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function print_list goes there */
/**
 * print_list - Entry point
 *
 * @h: first arg
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", ptr->len, ptr->str);
		}
		i++;
	}
	return (i);
}
