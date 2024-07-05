#include "main.h"
#include <stddef.h>


/* betty style doc for function _memset goes there */
/**
 * _memset - Entry point
 *
 * @s: first arg
 * @c: second arg
 * Return: str
 */
char *_strchr(char *s, char c)
{
	int i = 0, found = 0;
	char *ptr = s;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			ptr = &s[i - 1];
			found = 1;
		}
		i++;
	}
	if (found == 0)
	{
		ptr = NULL;
	}

	return (ptr);
}
