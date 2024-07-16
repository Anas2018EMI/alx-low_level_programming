#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function _strdup goes there */
/**
 * _strdup - Entry point
 * @str: first arg
 *
 * Return: char *
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	ptr = malloc(i + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*(ptr + j) = *str;
		str++;
		j++;
	}
	*(ptr + j) = *str;
	return (ptr);
}
