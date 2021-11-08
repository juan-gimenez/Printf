#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define MY_BUFFER_SIZE 1024

/**
 *
 */

typedef struct all
{
	char *lf;
	void (*f)(va_list ap);

} formatprints;

int _printf(const char *format, ...);
void print_char(va_list ad);
void print_string(va_list ad);
int _strlen(const char *s);
int _putchar(char c);

#endif
