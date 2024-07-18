#include <stdio.h>
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
	unsigned int i;
	char *ptr = malloc(sizeof(s1) + n);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(s1) + n; i++)
        {
                *(ptr + i) = '0';
        }
	for (i = 0; i < sizeof(s1) - 3; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	printf("%s\n", ptr);
	while (i < sizeof(s1) + n - 1)
	{
		*(ptr + i) = *(s2 + i);
		printf("%i\n", i);
		i++;
        }
	printf("%s\n", ptr);
	 *(ptr + i) = '\0';
	return (ptr);
}
