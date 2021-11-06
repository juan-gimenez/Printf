#include <stdlib.h>
#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
	va_list ad;
	int i, j = 0;

	while (i < _strlen(format))
	{
		if (format[i] == formats[j].lf)
			
