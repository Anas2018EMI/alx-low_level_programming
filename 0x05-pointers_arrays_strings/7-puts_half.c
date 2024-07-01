#include "main.h"


/* betty style doc for function puts_half goes there */
/**
 * puts_half - Entry point
 *
 * @str: first arg
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int counter = 0;
	int n, i;

	while (*(str + counter) != '\0')
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		n = counter / 2;
	}
	else
	{
		n = (counter - 1) / 2 + 1;
	}
	i = n;
	while (i < counter)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');

}
