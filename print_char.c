#include "main.h"

void print_char(va_list ad)
{
  if (ad == NULL)
    return (-1);
	 _putchar(va_arg(ad, int));
}
