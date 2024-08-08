#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function binary_to_uint goes there */
/**
 * binary_to_uint - Entry point
 *
 * @b: first arg
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t = 1, sum = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (*(b + i))
		{
			if (*(b + i) != '0' && *(b + i) != '1')
			{
				return (0);
			}
			i++;
		}
		i--;
		while (i >= 0)
		{
			if (*(b + i) == '1')
			{
				sum += t;
			}
			t *= 2;
			i--;
		}
	}
	return (sum);
}
