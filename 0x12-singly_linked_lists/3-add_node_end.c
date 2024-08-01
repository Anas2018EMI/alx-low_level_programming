#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function add_node_end goes there */
/**
 * add_node_end - Entry point
 *
 * @head: first arg
 * @str: second arg
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr, *ind;
	char *str2;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		i++;
	}
	str2 = strdup(str);
	if (str2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = str2;
	ptr->len = i;
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
