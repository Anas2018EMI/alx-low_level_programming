#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function array_range goes there */
/**
 * array_range - Entry point
 *
 * @max: first arg
 * @min: second arg
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		*(ptr + i) = i +  min;
	}
	return (ptr);
}

