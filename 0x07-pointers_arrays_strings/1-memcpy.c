#include "main.h"

/* betty style doc for function _memset goes there */
/**
 * _memset - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
