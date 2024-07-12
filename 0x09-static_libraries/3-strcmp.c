#include "main.h"

/* betty style doc for function _strcmp goes there */
/**
 * _strcmp - Entry point
 *
 * @s2: first arg
 * @s1: second arg
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0, i = 0;

	while (*(s1 + counter) != '\0')
	{
		counter++;
	}
	while (i < counter)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}

	return (0);
}
