#include "main.h"


/* betty style doc for function _strlen goes there */
/**
 * _strlen - Entry point
 *
 * @s: first arg
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	return (counter);
}
