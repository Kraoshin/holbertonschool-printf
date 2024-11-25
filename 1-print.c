#include "main.h"

/**
 *
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k;

	va_list args;

	op_t specifier[] = {
		{"c", print_char},
		{NULL, NULL}
	};

	va_start(args, format);

	if (!format)
		exit(98);
	while (format[i])
	{
		if (format[i] == '%')
		{
			k = i + 1;
			while (specifier[j].op)
			{
				if (format[k] == *specifier[j].op)
				{
					specifier[j].f(args);
					i += 2;
				}
				j++;
			}
		}
		if (!specifier[j].op && format[k + 1] == '\0')
			exit(0);
		else if (!specifier[j].op && format[k + 1] != '\0')
		{
			_putchar(format[i]);
			i += 2;
		}
		j = 0;
		_putchar(format[i]);
		i++;
	}

	va_end(args);
	return (0);

}
