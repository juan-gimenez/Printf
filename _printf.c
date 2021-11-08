#include "main.h"

/**
 * printf - our own printf.
 *@
 *Return: 
 */

int _printf(const char *format, ...)
{
	va_list ad;
	unsigned int count = 0;
	unsigned int i = 0;

	va_start(ad, format);

	for (;format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
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
				count += print_decimal();
			default:
				_putchar(format[i]);
			}
		}
	}
	printf("%d\n",count);
	printf("%i\n", count);
	return (count);
}
