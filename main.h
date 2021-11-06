#ifndef _HEADER_
#define _HEADER_

typedef struct formats
{
	{"%c", print_char},
	{"%s", print_string},
	{NULL, NULL}
};
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(char c);
void print_string(char *s);
int _strlen(char *s);
int _putchar(char c);

#endif
