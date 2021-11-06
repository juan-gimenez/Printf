#include "main.h"
/**
 * print_string - prints a string
 *Return: 0 
 *@s: string
 */
void print_string(va_list ad)
{
	unsigned int i = 0;

	while (ad != 0)
		i++;

	write(1, va_arg(ad, char *), (sizeof(char) * i));
}
