#include "main.h"
#include <stddef.h>


/* betty style doc for function _strchr goes there */
/**
 * _strchr - Entry point
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
			ptr = &s[i];
			found = 1;
			return (ptr);
		}
		i++;
	}
	if (*(s + i) == '\0' && c == '\0')
	{
		ptr = &s[i];
		return (ptr);
	}
	if (found == 0)
	{
		ptr = NULL;
	}

	return (ptr);
}
