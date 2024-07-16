#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void str_cpy(char *s1, char *ptr, int k)
{
	if (s1 != NULL)
        {
                while (*s1)
                {
                        *(ptr + k) = *s1;
                        s1++;
                        k++;
                }
        }
}
/* betty style doc for function str_concat goes there */
/**
 * str_concat - Entry point
 * @s1: first arg
 * @s2: second arg
 *
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		while (*(s1 + i))
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + j))
		{
			j++;
		}
	}

	ptr = malloc(i + j + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	str_cpy(s1, ptr, k);
	if (s1 != NULL || s2 != NULL)
	{
		*(ptr + k) = '\0';
	}
	return (ptr);
}
