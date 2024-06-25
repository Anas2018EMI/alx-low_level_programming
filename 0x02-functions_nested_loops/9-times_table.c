#include "main.h"

/* betty style doc for function times_table goes there */
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, j = 1, m;

	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			m = i * j;
			
			_putchar(',');
			_putchar(' ');

                        if (m / 10 == 0)
                        {
                                _putchar(' ');
                        }
			else
			{
				_putchar('0' + m / 10);
			}
			_putchar('0' + m % 10);
			
			j++;
		}
		_putchar('\n');
		i++;
	}
}
