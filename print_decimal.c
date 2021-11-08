#include "main.h"
/**
 * print_decimal - prints a decimal or integer.
 *@ad: argument value.
 *Return: no of bytes.
 */

int print_decimal(va_list ad)
{
	unsigned int i = 0;
	char *s;

	s = va_arg(ad, char *);
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
