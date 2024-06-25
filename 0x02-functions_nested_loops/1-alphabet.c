#include "main.h"

/* betty style doc for function print_alphabet goes there */
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 97;
	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
