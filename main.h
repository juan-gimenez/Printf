#ifndef _HEADER_
#define _HEADER_

typedef struct formats
{
	{"%c", print_char},
	{"%s", print_string},
	{NULL, NULL}
};

int _printf(const char *format, ...);

#endif
