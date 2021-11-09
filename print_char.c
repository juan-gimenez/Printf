#include "main.h"
/**
 * print_char - prints a char.
 *@ad: argument value.
 *Return: 1 for char.
 */

int print_char(va_list ad)
{
	int c = va_arg(ad, int);

	return (_putchar(c));
}
