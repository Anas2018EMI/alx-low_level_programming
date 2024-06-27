#include "main.h"

/* betty style doc for function print_square goes there */
/**
 * print_square - Entry point
 * @size: first argument
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < size)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
}
