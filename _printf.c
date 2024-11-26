#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
	int i = 0, lenprinted = 0;
	va_list args;

	va_start(args, format);
	if (!format)

		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			lenprinted += specifier(format[i + 1], args);
			i += 2;
		}

		else
		{
			lenprinted++;
			_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (lenprinted);
}
