#include "main.h"
#include <stddef.h>

/* betty style doc for function _strpbrk goes there */
/**
 * _strpbrk - Entry point
 * @s: first arg
 * @accept: second arg
 *
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, l = 0, temp;
	char *ptr;

	while (*(s + i) != '\0')
	{
		l = 0;
		while (*(accept + l) != '\0')
		{
			if (*(s + i) == *(accept + l))
			{
				j++;
				if (j == 1)
				{
					temp = i;
				}
				else if (j > 0 && i < temp)
				{
					temp = i;
				}
			}
			l++;
		}
		i++;
	}

	if (j > 0)
	{
		ptr = &s[temp];
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
