#include "main.h"

/* betty style doc for function _strcat goes there */
/**
 * _strcat - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0, i = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + counter) = *(src + i);
		counter++;
		i++;
	}

	return (dest);
}
