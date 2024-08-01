#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/* betty style doc for function free_list goes there */
/**
 * free_list - Entry point
 *
 * @head: first arg
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head, *ptr2;

	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = ptr2;
	}
}
