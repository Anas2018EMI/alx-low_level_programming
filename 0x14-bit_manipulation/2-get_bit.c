#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/* betty style doc for function get_bit goes there */
/**
 * get_bit - Entry point
 *
 * @n: first arg
 * @index: second arg
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
