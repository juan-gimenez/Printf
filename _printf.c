#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
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
	
