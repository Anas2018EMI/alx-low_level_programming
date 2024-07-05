#include "main.h"

/* betty style doc for function _memset goes there */
/**
 * _memset - Entry point
 *
 * @s: first arg
 * @b: second arg
 * @n: third arg
 * Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
