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
	if (ad == NULL)
		return (-1);
	while (s[i] != 0)
		i++;

	write(1, s, (i));
	return (i);
}
