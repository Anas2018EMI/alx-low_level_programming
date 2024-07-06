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
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
