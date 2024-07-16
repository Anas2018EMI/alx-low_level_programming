#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/* betty style doc for function len_str goes there */
/**
 * len_str - Entry point
 * @s1: first arg
 * Return: int
 */
int len_str(char *s1)
{
	int i = 0;

	if (s1 != NULL)
	{
		while (*(s1 + i))
		{
			i++;
		}
	}
	return (i);
}

/* betty style doc for function str_concat goes there */
/**
 * str_concat - Entry point
 * @s1: first arg
 * @s2: second arg
 *
 *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *ptr;

	i = len_str(s1);
	j = len_str(s2);
	ptr = malloc(i + j + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		*ptr = '\0';
	}
	if (s1 != NULL)
	{
		while (*s1)
		{
			*(ptr + k) = *s1;
			s1++;
			k++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*(ptr + k) = *s2;
			s2++;
			k++;
		}
	}
	if (s1 != NULL || s2 != NULL)
	{
		*(ptr + k) = '\0';
	}
	return (ptr);
}
