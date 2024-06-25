#include "main.h"

/* betty style doc for function print_alphabet_x10 goes there */
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j=0, i = 97;

	do
	{
		while (i < 123)
			{
				_putchar(i);
				i++;
			}
		_putchar('\n');
		i=97;
		j++;
	} while (j < 10);
}
