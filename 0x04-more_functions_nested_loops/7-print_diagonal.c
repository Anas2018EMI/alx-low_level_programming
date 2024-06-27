#include "main.h"

/* betty style doc for function print_diagonal goes there */
/**
 * print_diagonal - Entry point
 * @n: first argument
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < n)
		{
			i = 0;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
}
