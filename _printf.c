#include "main.h"
#include <stdio.h>

/**
 *
 */

int _printf(const char *format, ...)
{
	va_list ad;
	int i, j = 0;
	int s = _strlen(format);
	formatprints formats[] = {
        {"c", print_char},
        {"s", print_string},
        {NULL, NULL}
};
	va_start(ad, format);
	
	i = 0;

	while (i < s)
	{
		if (format[i] == '%')
		{
			i++;
			while (formats[j].lf != NULL)
			{
				if (format[i] == formats[j].lf[0])
				{
					formats[i].f(ad);
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		i++;
	}

	va_end(ad);
	return (0);
}
