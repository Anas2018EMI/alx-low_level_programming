#include "main.h"
#include <limits.h>

/* betty style doc for function print_last_digit goes there */
/**
 * print_last_digit - Entry point
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n *= -1;
	}
	if (n == INT_MIN)
	{
		_putchar('8');
		return (8);
	}

	m = n % 10;
	_putchar('0' + m);
	return (m);
}
