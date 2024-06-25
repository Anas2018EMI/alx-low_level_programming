#include "main.h"

/* betty style doc for function  jack_bauer goes there */
/**
 *  jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void  jack_bauer(void)
{
	int i , j ,m = 0;

	while (m < 24)
        {
		j = 0;
		while (j < 6)
		{
			i = 0;
			while (i < 10)
			{
				_putchar('0' + m/10);
				_putchar('0' + m%10);
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + i);
				_putchar('\n');
				i++;
			}
			j++;
		}
	m++;
	}
	
}
