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
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
