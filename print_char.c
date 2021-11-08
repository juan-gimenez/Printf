#include "main.h"
/**
 * print_char - prints a char.
 *@ad: argument value.
 */
void print_char(va_list ad)
{
<<<<<<< HEAD
  if (ad == NULL)
    return (-1);
	 _putchar(va_arg(ad, int));
=======
	char c = va_arg(ad, int);

	if (c == '\0')
		return;

	_putchar(c);
>>>>>>> fae02cd51bcf3e1ba3ba6cbda16dab1701024e32
}
