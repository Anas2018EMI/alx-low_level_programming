#include "main.h"

/* betty style doc for function print_last_digit goes there */
/**
 * print_last_digit - Entry point
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
