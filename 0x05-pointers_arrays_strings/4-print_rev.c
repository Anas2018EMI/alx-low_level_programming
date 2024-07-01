#include "main.h"


/* betty style doc for function print_rev goes there */
/**
 * print_rev - Entry point
 *
 * @s: first arg
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	while ( counter >= 0)
	{
		_putchar(*(s + counter - 1));
		counter--;
	}
	_putchar('\n');

}
