#include "main.h"


/* betty style doc for function puts2 goes there */
/**
 * puts2 - Entry point
 *
 * @str: first arg
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(*(str + counter));
		}
		counter++;
	}
	_putchar('\n');

}
