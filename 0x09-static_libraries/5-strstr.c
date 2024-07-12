#include "main.h"
#include <stddef.h>

/* betty style doc for function _strstr goehaystackthere */
/**
 * _strstr - Entry point
 * @haystack: first arg
 * @needle: second arg
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l = 0;
	char *ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*(haystack + i) != '\0')
	{
		l = 0;
		j = i;
		while (*(needle + ++l) == *(haystack + ++i) || *(needle + l) == '\0')
		{
			if (*(needle + l) == '\0')
			{
				ptr = &haystack[j];
				return (ptr);
			}
		}
		i = j;
		i++;
	}

	return (NULL);
}
