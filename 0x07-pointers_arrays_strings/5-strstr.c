#include "main.h"
#include <stddef.h>

/* betty style doc for function _strstr goehaystackthere */
/**
 * _strstr - Entry point
 * @haystack: first arg
 * @needle: second arg
 *
 * Return: unsigned int
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l = 0, counter = 0, temp;
	char *ptr;

	while (*(needle + counter) != '\0')
                {
			counter++;
		}

	while (*(haystack+ i) != '\0')
	{
		l = 0;
		while (*(needle + l) != '\0')
		{
			if (*(haystack+ i) == *(needle + l))
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
				break;
			}
			l++;
		}
		i++;
	}

	if (j == counter)
	{
		ptr = &haystack[temp];
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
