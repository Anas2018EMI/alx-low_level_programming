#include "function_pointers.h"
#include <stddef.h>
/* betty style doc for function int_index goes there */
/**
 * int_index - Entry point
 *
 * @array: first arg
 * @size: second arg
 * @cmp: third arg
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL &&  cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

