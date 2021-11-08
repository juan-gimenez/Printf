#include "main.h"

/**
 * _printf - our own printf.
 *@format: format specified
 * ... - arguments passed
 *Return: number of bytes printed1
 */

int _printf(const char *format, ...)
{
	va_list ad;
	unsigned int count = 0;
	unsigned int i = 0;

	if (format)
	{
		va_start(ad, format);

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
						print_char(ad);
						count++;
						break;
					case 's':
						count += print_string(ad);
						break;
					case 'd':
						count += print_decimal(ad);
						break;
					default:
						count += _putchar(format[i]);
				}
			}
		}
	}
	return (count);
}
