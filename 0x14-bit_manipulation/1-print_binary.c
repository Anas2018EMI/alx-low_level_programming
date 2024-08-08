#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function print_binary goes there */
/**
 * print_binary - Entry point
 *
 * @n: first arg
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;
	int i = 0, l = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		while (n >= m)
		{
			m *= 2;
			l++;
		}
		l -= 1;
		for (j = 0; j < l + 1; j++)
		{
			m = 1;
			for (i = 0; i < l - j ; i++)
			{
				m *= 2;
			}
			if (n & m)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}

		}
	}
}
