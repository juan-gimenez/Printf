#ifndef _HEADER_
#define _HEADER_
#define MY_BUFFER_SIZE 1024
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_char(va_list ad);
int print_string(va_list ad);
int print_decimal(va_list ad);
int _strlen(const char *s);
int _putchar(char c);

#endif
