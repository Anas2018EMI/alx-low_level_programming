#include "main.h"
#include <stdio.h>

/* betty style doc for function _strcpy goes there */
/**
 * _strcpy - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = *(src + counter);
	return (dest);
}
