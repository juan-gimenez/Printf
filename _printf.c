#include "main.h"
#include <stdio.h>
/**
 * _printf - our own printf.
 *@format: format specified
 * ... - arguments passed
 *Return: number of bytes printed
 */

int _printf(const char *format, ...)
{
	va_list ad;
	unsigned int count = 0;
	unsigned int i = 0;

	if (format != NULL && format[i] != '\0')
	{
		va_start(ad, format);
		if (lista == NULL)
		  return (-1);

		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		  return (-1);
		
		for (; format[i] != 0; i++)
		{
			if (format[i] != '%')
			{
				count += _putchar(format[i]);
			}
			else
			{
				i++;
				switch (format[i])
				{
					case 'c':
						count += print_char(ad);
						break;
					case 's':
						count += print_string(ad);
						break;
					case 'd':
						count += print_decimal(ad);
						break;
					case '\0':
						break;
					case ' ':
						return (-1);
						break;
					default:
					        count += _putchar(format[i]);
				}
			}
		}
	}
	va_end(ad);
	return (count);
}
