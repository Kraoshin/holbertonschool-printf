#include "main.h"

/**
 *
 */

int print_char(va_list args)
{
	char charac = va_arg(args, int);

	return(_putchar(charac));
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

	return(i);
}
