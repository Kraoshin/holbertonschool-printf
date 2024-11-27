#include "main.h"

/**
 * _printf - Function that produce output according to a format.
 *
 * @format: String that can include text to print or format specifiers, if any.
 *
 * Return: The length of the printed string &/or printed args, -1 if !format.
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
		if (format[i] == '%' && !format[i + 1])
			return (-1);

		if (format[i] == '%' && format[i + 1] == ' ' && !format[i + 2])
			return (-1);
		i++;
	}

	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			lenprinted += specifier(format[i + 1], args);
			/*pass the char after the % and the args list in the function specifier*/
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
