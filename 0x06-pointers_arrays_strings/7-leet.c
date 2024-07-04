#include "main.h"

/* betty style doc for function leet goes there */
/**
 * leet - Entry point
 *
 * @str: first arg
 * Return: str
 */
char *leet(char *str)
{
	int counter = 0, i = 0;
	char *sep = "aAeEoOtTlL";
	char *rep = "4433007711";

	while (*(str + counter) != '\0')
	{
		i = 0;
		while (*(sep + i) != '\0')
		{
			if (*(str + counter) == *(sep + i))
			{
				*(str + counter) = *(rep + i);
			}
			i++;
		}
		counter++;
	}

	return (str);
}
