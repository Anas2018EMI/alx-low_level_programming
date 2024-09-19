#include "lists.h"

/* betty style doc for function sum_dlistint goes there */
/**
 * sum_dlistint - Entry point
 * @head: first arg
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
