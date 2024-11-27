#include "main.h"

/**
 * specifier - function that takes a char and compare it with a specifier to
 * return the right print function.
 *
 * @charac: the char passed after the % to compare with the specif list.
 * @args: The argument to print according the right specifer if any.
 *
 * Return: If a matching specifier, the print function associated else 2.
 */

int specifier(const char charac, va_list args)
{
	int i = 0;

	print_a specif[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	while (specif[i].specifiers)
	{
		if (charac == *specif[i].specifiers)
			return (specif[i].f(args));
		i++;
	}

	_putchar('%');
	_putchar(charac);

	return (2);
}
