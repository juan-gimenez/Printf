#include "main.h"

/**
 * printf - our own printf.
 *@
 *Return: 
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
<<<<<<< HEAD
	va_list ad;
	unsigned int i, j = 0;
	
	formatprints formats[] = {
		{"%", NULL},
        	{"c", print_char},
        	{"s", print_string},
        	{NULL, NULL}
	};

	va_start(ad, format);
=======
	va_list ap;
	unsigned int i;
>>>>>>> a4b54f47f362dc51a22c0c5beb141f4892646690
	
>>>>>>> 81836500bc50e5bcb95e4682e78c0da5ac6e63bf
