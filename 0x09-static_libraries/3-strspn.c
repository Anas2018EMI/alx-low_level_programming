#include "main.h"

/* betty style doc for function _strspn goes there */
/**
 * _strspn - Entry point
 * @s: first arg
 * @accept: second arg
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			return (count);
		s++;
	}

	return (count);
}
