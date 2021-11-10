#include "main.h"

/**
 * print_decimal - prints a string.
 *@ad: argument
 *Return: no of characters.
 */
int print_decimal(va_list ad)
{
	unsigned int abs, aux, num, chars;
	int n;

	chars = 0;
	n = va_arg(ad, int);
	if (n < 0)
	{
		abs = (n * -1);
	chars += _putchar('-');
	}
	else
		abs = n;

	aux = abs;
	num = 1;
	while (aux > 9)
	{
		aux /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		chars += _putchar(((abs / num) % 10) + '0');
		num /= 10;
	}
	return (chars);
}
