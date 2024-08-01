#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/* betty style doc for function add_node goes there */
/**
 * add_node - Entry point
 *
 * @head: first arg
 * @str: second arg
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	ptr->str = malloc(sizeof(char) * i);
	if (ptr->str == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
