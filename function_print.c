#include "main.h"

/**
 * print_char - a function that print the character
 *
 * @args: argument that will replace the format specifier, if any
 *
 * Return: return the function _putchar with the argument as the character
 *
 */

int print_char(va_list args)
{
	char charac = va_arg(args, int);

	return (_putchar(charac));
}

/**
 * print_string - a function that print the string
 *
 * @args: argument that will replace the format specifier, if any
 *
 * Return: return len of printed string
 *
 */

int print_string(va_list args)
{
	int len = 0;
	char *string = va_arg(args, char *);


	while (string[len])
	{
		_putchar(string[len]);
		len++;
	}

	return (len);
}

/**
 * print_percent - a function that print the percent
 *
 * @args: argument that will replace the format specifier, if any
 *
 * Return: return number of printed char
 *
 */

int print_percent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}

/**
 * print_integer - a function that print the integer
 *
 * @args: argument that will replace the format specifier, if any
 *
 * Return: return the number of printed character
 */

int print_integer(va_list args)
{
	long int div, num = va_arg(args, int);
	int power = 1, result = 0;

	if (num < 0)
	{
		result += _putchar('-');
		num *= -1;
		/*print - char and send num as positive*/
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
