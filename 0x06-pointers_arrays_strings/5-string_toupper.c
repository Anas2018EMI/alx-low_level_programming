#include "main.h"

/* betty style doc for function string_toupper goes there */
/**
 * string_toupper - Entry point
 *
 * @str: first arg
 * Return: str
 */
char *string_toupper(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= 97 && *(str + counter) <= 122)
		{
			*(str + counter) -= 32;
		}
		counter++;
	}

	return (str);
}
