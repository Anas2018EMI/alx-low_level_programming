#include "main.h"

/* betty style doc for function print_triangle goes there */
/**
 * print_triangle - Entry point
 * @size: first argument
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
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
			while (i < size - j - 1)
			{
				_putchar(' ');
				i++;
			}
			i = 0;
			while (i <= j)
			{
				_putchar('#');
				i++;
			}

			_putchar('\n');
			j++;
		}
	}
}
