#include "main.h"

/**
 *
 */

int specifier(const char charac, va_list args)
{
	int i = 0;

	op_t specif[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	while (specif[i].op)
	{
		if (charac == *specif[i].op)
			return (specif[i].f(args));
		i++;
	}

	_putchar('%');
	_putchar(charac);

	return (2);
}
