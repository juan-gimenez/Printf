#include "main.h"

/**
 * print_char - prints a char
 *Return: 0
 *@c: char input
 */
void print_char(va_list ad)
{
	_putchar(va_arg(ad, int));
}
