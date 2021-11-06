#include "main.h"
#include <stdio.h>

/**
 *
 */

int _printf(const char *format, ...)
{
	va_list ad;
	unsigned int i, j = 0;
	formatprints formats[] = {
		{"%", NULL},
        	{"c", print_char},
        	{"s", print_string},
        	{NULL, NULL}
	};

	va_start(ad, format);
	
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
			if (formats[i].lf[0] != format[j])
			{
				_putchar(format[j]);
			}
			else
			{	
				j++;
				while (format[j] != formats[i].lf[0] && formats[i].lf[0] != 0)
				{
					i++;
					if (format[j] == formats[i].lf[0])
						formats[i].f(ad);
				}
			}
		j++;
	}

	va_end(ad);
	return (0);
}
