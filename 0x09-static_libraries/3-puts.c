#include "main.h"


/* betty style doc for function _puts goes there */
/**
 * _puts - Entry point
 *
 * @str: first arg
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		_putchar(*(str + counter));
		counter++;
	}
	_putchar('\n');

}
