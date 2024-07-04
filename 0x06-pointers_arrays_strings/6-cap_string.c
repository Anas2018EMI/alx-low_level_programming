#include "main.h"
#include <stdio.h>

/* betty style doc for function cap_string goes there */
/**
 * cap_string - Entry point
 *
 * @str: first arg
 * Return: str
 */
char *cap_string(char *str)
{
	int counter = 0, i = 0;
	char *sep = " \t\n,;.!?\"(){}";

	while (*(str + counter) != '\0')
	{
		i = 0;
		while (*(sep + i) != '\0')
		{
			if (*(str + counter) == *(sep + i))
			{
				if (*(str + counter + 1) >= 97 && *(str + counter + 1) <= 122)
				{
					*(str + counter + 1) -= 32;
				}
				if (*(str + counter) == '\t')
				{
					*(str + counter) = ' ';
				}
			}
			i++;
		}
		counter++;
	}

	return (str);
}
