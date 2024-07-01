#include "main.h"


/* betty style doc for function rev_string goes there */
/**
 * rev_string - Entry point
 *
 * @s: first arg
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int counter = 0;
	char arr[1000];
	int i = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	while (i < counter)
	{
		arr[i] = *(s + counter - 1 - i);
		i++;
	}
	i=0;
	 while (i < counter)
        {
               *(s + i) = arr[i];
                i++;
        }
}
