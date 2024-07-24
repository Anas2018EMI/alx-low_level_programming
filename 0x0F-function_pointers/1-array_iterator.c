#include "function_pointers.h"
#include <stddef.h>
/* betty style doc for function array_iterator goes there */
/**
 * array_iterator - Entry point
 *
 * @array: first arg
 * @size: second arg
 * @action: third arg
 * Return: void
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	if (array != NULL &&  action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

