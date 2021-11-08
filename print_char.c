#include "main.h"
/**
 * print_char - prints a char.
 *@ad: argument value.
 *Return: 1 for char.
 */

int print_char(va_list ad)
{
	char c = va_arg(ad, int);

	if (c == '\0')
		return(0);

	_putchar(c);
	
	return (1);
}
