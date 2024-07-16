#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function create_array goes there */
/**
 * create_array- Entry point
 * @size: first arg
 * @c: second arg
 *
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
