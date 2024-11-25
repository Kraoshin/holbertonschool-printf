#include "main.h"
/**
 *
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format ++;
			if (*format == 'c')
				charac(args);
		}
	}
	va_end(args);
	return (1);
}
