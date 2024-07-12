#include "main.h"

/* betty style doc for function _strncpy goes there */
/**
 * _strncpy - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0, i = 0;

	while (*(src + counter) != '\0')
	{
		counter++;
	}
	while (i < n)
	{
		if (i > counter)
		{
			*(dest + i) = '\0';
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}

	return (dest);
}
