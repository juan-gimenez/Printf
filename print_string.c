#include "main.h"

/**
 * print_string - prints a string.
 *@ad: argument
 *Return: no of characters.
 */
int print_string(va_list ad)
{
	char *s;
	unsigned int i = 0;

	s = va_arg(ad, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i] != 0)
	{
		_putchar (s[i]);
		i++;
	}
	return (i);
}
