#include "main.h"
/* betty style doc for function void print_number(int n); goes there */
/**
 * print_number - Entry point
 *
 * @n: first arg
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int i = 0, digit = 10;
	if (n < 0)
	{
		_putchar('-');
	}
	do {
		_putchar('0' + n % digit);
		i++;
		digit *= 10;
	} while (n / digit > 0);




	_putchar('\n');
}
