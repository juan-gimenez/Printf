#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 */

typedef struct all
{
<<<<<<< HEAD
	char *lf;
	void (*f)(va_list ap);
} formatprints;
=======
	{"%c", print_char},
	{"%s", print_string},
	{NULL, NULL}
};
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
>>>>>>> 5c763b96a0e348d6f9ebcd61c40e453509a4c257

int _printf(const char *format, ...);
void print_char(va_list ad);
void print_string(va_list ad);
int _strlen(const char *s);
int _putchar(char c);

#endif
