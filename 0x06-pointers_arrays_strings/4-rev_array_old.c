#include "main.h"

/* betty style doc for function reverse_array goes there */
/**
 * reverse_array - Entry point
 *
 * @a: first arg
 * @n: second arg
 */
void reverse_array(int *a, int n)
{
	int m, limit, i = 0;

	if (n != 1 && n != 2)
	{
		if (n % 2 != 0)
		{
			limit = (n - 1) / 2;
		}
		else
		{
			limit = n / 2;
		}
		while (i <= limit)
		{
			m = *(a + i);
			*(a + i) = *(a + n - 1 - i);
			*(a + n - 1 - i) = m;
			i++;
		}
	}
	else if (n == 2)
	{
		m = *a;
		*a = *(a + 1);
		*(a + 1) = m;
	}

}
