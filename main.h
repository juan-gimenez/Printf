#ifndef _HEADER_
#define _HEADER_

typedef struct formats
{
	{"%c", print_char},
	{"%s", print_string},
	{NULL, NULL}
};

int _printf(const char *format, ...);
void print_char(char c);
void print_string(char *s);
int _strlen(char *s);
int _putchar(char c);

#endif
