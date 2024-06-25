#include "main.h"

/* betty style doc for function times_table goes there */
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, j = 0, m;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = i * j;
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			
			j++;
		}
		_putchar('\n');
		i++;
	}
}
