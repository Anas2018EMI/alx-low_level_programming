#include "main.h"
#include <stddef.h>


/* betty style doc for function _strspn goes there */
/**
 * _strspn - Entry point
 *
 * @s: first arg
 * @accept: second arg
 * Return: str
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;
	unsigned int found = 0, final = 0;
	char *char_found = s,

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				found++;
				while

			}
			j++;
		}
		i++;
	}
	if (found == 0)
	{
		ptr = NULL;
	}

	return (final);
}
