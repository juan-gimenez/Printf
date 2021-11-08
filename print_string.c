#include "main.h"

int print_string(va_list ad)
{
	char *s;
	unsigned int i = 0;

	s = va_arg(ad, char *);
	while (s[i] != 0)
		i++;

	write(1, s, (i));
	return (i);
}
