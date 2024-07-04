#include "main.h"

/* betty style doc for function rot13 goes there */
/**
 * rot13 - Entry point
 *
 * @str: first arg
 * Return: str
 */
char *rot13(char *str)
{
	int counter = 0, i = 0;
	char *sep = "abcdefghijklmnopqrstuvwxyz";
	char *rep = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*(str + counter) != '\0')
	{
		i = 0;
		while (i<26)
		{
			if (*(str + counter) == *(sep + i))
			{
				*(str + counter) = *(sep + ((i + 13) % 26));
				break;
			}
			else if (*(str + counter) == *(rep + i))
			{
				*(str + counter) = *(rep + ((i + 13) % 26));
				break;
			}
			i++;
		}
		counter++;
	}

	return (str);
}
