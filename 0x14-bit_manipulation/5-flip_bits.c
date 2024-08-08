#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function flip_bits goes there */
/**
 * flip_bits - Entry point
 *
 * @n: first arg
 * @m: second arg
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int i = 0;

	while (j)
	{
		i += j & 1;
		j >>= 1;
	}

	return (i);
}
