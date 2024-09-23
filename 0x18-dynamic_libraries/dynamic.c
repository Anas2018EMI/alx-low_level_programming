#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/* betty style doc for function _islower goes there */
/**
 * _islower - Entry point
 *@c: First operand
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



/* betty style doc for function _isalpha goes there */
/**
 * _isalpha - Entry point
 *@c: First operand
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



/* betty style doc for function _abs goes there */
/**
 * _abs - Entry point
 * @n: First operand
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n);
}



/* betty style doc for function _isupper goes there */
/**
 * _isupper - Entry point
 * @c: first arg
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



/* betty style doc for function _isdigit goes there */
/**
 * _isdigit - Entry point
 * @c: first arg
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}




/* betty style doc for function _strlen goes there */
/**
 * _strlen - Entry point
 *
 * @s: first arg
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	return (counter);
}




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




/* betty style doc for function _strcpy goes there */
/**
 * _strcpy - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	*(dest + counter) = *(src + counter);
	return (dest);
}



/* betty style doc for function _atoi goes there */
/**
 * _atoi - Entry point
 * @s: First operand
 * Return: int
 */
int _atoi(char *s)
{
	if (*s)
	{
		return (1);
	}
	return (0);
}



/* betty style doc for function _strcat goes there */
/**
 * _strcat - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0, i = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + counter) = *(src + i);
		counter++;
		i++;
	}

	return (dest);
}



/* betty style doc for function _strncat goes there */
/**
 * _strncat - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, i = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + counter) = *(src + i);
		counter++;
		i++;
	}

	return (dest);
}



/* betty style doc for function _strncpy goes there */
/**
 * _strncpy - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0, i = 0;

	while (*(src + counter) != '\0')
	{
		counter++;
	}
	while (i < n)
	{
		if (i > counter)
		{
			*(dest + i) = '\0';
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}

	return (dest);
}




/* betty style doc for function _strcmp goes there */
/**
 * _strcmp - Entry point
 *
 * @s2: first arg
 * @s1: second arg
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0, i = 0;

	while (*(s1 + counter) != '\0')
	{
		counter++;
	}
	while (i < counter)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}

	return (0);
}



/* betty style doc for function _memset goes there */
/**
 * _memset - Entry point
 *
 * @s: first arg
 * @b: second arg
 * @n: third arg
 * Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}



/* betty style doc for function _memset goes there */
/**
 * _memset - Entry point
 *
 * @src: first arg
 * @dest: second arg
 * @n: third arg
 * Return: str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}



/* betty style doc for function _strchr goes there */
/**
 * _strchr - Entry point
 *
 * @s: first arg
 * @c: second arg
 * Return: str
 */
char *_strchr(char *s, char c)
{
	int i = 0, found = 0;
	char *ptr = s;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			ptr = &s[i];
			found = 1;
			return (ptr);
		}
		i++;
	}
	if (*(s + i) == '\0' && c == '\0')
	{
		ptr = &s[i];
		return (ptr);
	}
	if (found == 0)
	{
		ptr = NULL;
	}

	return (ptr);
}



/* betty style doc for function _strspn goes there */
/**
 * _strspn - Entry point
 * @s: first arg
 * @accept: second arg
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
		}
		if (!found)
			return (count);
		s++;
	}

	return (count);
}




/* betty style doc for function _strpbrk goes there */
/**
 * _strpbrk - Entry point
 * @s: first arg
 * @accept: second arg
 *
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, l = 0, temp;
	char *ptr;

	while (*(s + i) != '\0')
	{
		l = 0;
		while (*(accept + l) != '\0')
		{
			if (*(s + i) == *(accept + l))
			{
				j++;
				if (j == 1)
				{
					temp = i;
				}
				else if (j > 0 && i < temp)
				{
					temp = i;
				}
			}
			l++;
		}
		i++;
	}

	if (j > 0)
	{
		ptr = &s[temp];
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}


/* betty style doc for function _strstr goehaystackthere */
/**
 * _strstr - Entry point
 * @haystack: first arg
 * @needle: second arg
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l = 0;
	char *ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*(haystack + i) != '\0')
	{
		l = 0;
		j = i;
		while (*(needle + ++l) == *(haystack + ++i) || *(needle + l) == '\0')
		{
			if (*(needle + l) == '\0')
			{
				ptr = &haystack[j];
				return (ptr);
			}
		}
		i = j;
		i++;
	}

	return (NULL);
}
