#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function string_nconcat goes there */
/**
 * _calloc - Entry point
 *
 * @nmemb: first arg
 * @size: second arg
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *ptr2;
	unsigned int i, mem;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	mem = nmemb * size;
	if (mem / nmemb != size)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr2 = ptr;
	for (i = 0; i < mem; i++)
	{
		ptr2[i] = 0;
	}
	return (ptr);
}

