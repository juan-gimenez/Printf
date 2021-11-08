#include "main.h"
/**
 * print_char - prints a char.
 *@ad: argument value.
 */
void print_char(va_list ad)
{
	char c = va_arg(ad, int);

	if (c == '\0')
		return;

	_putchar(c);
}
