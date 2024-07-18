#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
    char *ptr = malloc(strlen(s1) + n + 1);

    if (ptr == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < strlen(s1) + n + 1; i++)
    {
        *(ptr + i) = '0';
    }
    for (i = 0; i < strlen(s1); i++)
    {
        *(ptr + i) = *(s1 + i);
    }
    while (i < strlen(s1) + n)
    {
        *(ptr + i) = *(s2 + i - strlen(s1));
        i++;
    }
    *(ptr + i) = '\0';
    return (ptr);
}

