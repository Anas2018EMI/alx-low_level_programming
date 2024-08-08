#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function set_bit goes there */
/**
 * set_bit - Entry point
 *
 * @n: first arg
 * @index: second arg
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
