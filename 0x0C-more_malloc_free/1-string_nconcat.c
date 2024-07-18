#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function string_nconcat goes there */
/**
 * string_nconcat - Entry point
 *
 * @s1: first arg
 * @s2: second arg
 * @n: third arg
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *ptr;

	while (*(s1 + j) != '\0')
	{
		j++;
	}
	ptr = malloc(j + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	while (i < j + n)
	{
		*(ptr + i) = *(s2 + i - j);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

