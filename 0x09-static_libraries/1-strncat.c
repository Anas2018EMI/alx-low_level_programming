#include "main.h"

/* betty style doc for function _strncat goes there */
/**
 * _strncat - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, i = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + counter) = *(src + i);
		counter++;
		i++;
	}

	return (dest);
}
