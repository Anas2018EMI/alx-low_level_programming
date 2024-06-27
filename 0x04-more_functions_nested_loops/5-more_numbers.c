#include "main.h"

/* betty style doc for function more_numbers goes there */
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
