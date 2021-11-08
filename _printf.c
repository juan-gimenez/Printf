#include "main.h"
#include <stdarg.h>

/**
<<<<<<< HEAD
 * printf - our own printf.
 *@format: printf
 *Return: 1
=======
 * _printf - our own printf.
 *@format: format specified
 * ... - arguments passed
 *Return: number of bytes printed
>>>>>>> b2e6dd53cb0275ea054736870413a1eaf3bf8fcd
 */
int _printf(const char *format, ...)
{
  va_list ad;
  unsigned int count = 0;
  unsigned int i = 0;
  
  if (format)
    {
	    va_start(ad, format);
	    if (ad == NULL)
	      return (-1);
	    for (; format[i] != 0; i++)
	      {
		if (format[i] != '%')
		  {
		    _putchar(format[i]);
			count++;
		  }
		else
		  {
		    i++;
			switch (format[i])
<<<<<<< HEAD
			{
			case 'c':
				print_char(ad);
				count++;
				break;
			case 's':
				count += print_string(ad);
				break;
			case 'd':
				count += print_decimal(ad);
				break;
			default:
				_putchar(format[i]);
			}
		}
=======
			  {
			  case 'c':
			    print_char(ad);
			    count++;
			    break;
			  case 's':
			    count += print_string(ad);
			    break;
			  case 'd':
			    count += print_decimal();
			  default:
			  _putchar(format[i]);
			  }
		  }
>>>>>>> b2e6dd53cb0275ea054736870413a1eaf3bf8fcd
	}
	
	
	  }
}

}
printf("%d\n", count);
printf("%i\n", count);
return (count);
}
