#include "main.h"

/**
 *
 */

int print_char(va_list args)
{
	char charac = va_arg(args, int);

	return (_putchar(charac));
}

/**
 *
 */

int print_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);


	while (string[i])
	{
		_putchar(string[i]);
		i++;
	}

	return (i);
}

/**
 *
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}

/**
 *
 */

int print_integer(va_list args)
{
	long int div, num = va_arg(args, int);
	int power = 1, result = 0;

	if (num < 0)
	{
		result += _puthcar('-');
		num *= -1;
	}

	if (num < 10)
		return (result += _putchar(num + '0'));

	div = num;

	while (div > 9)
	{
		power *= 10;
		div /= 10;
	}

	while (power >= 1)
	{
		result += _putchar(((num / power) % 10) + '0');
		power /= 10;
	}

	return (result);
}



