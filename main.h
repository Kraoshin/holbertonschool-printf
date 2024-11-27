#ifndef main_h
#define main_h
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int specifier(const char charac, va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

/**
 * struct print_args - List of format specifier and their print function.
 *
 * @specifiers: Define how an arg should be formatted & displayed when printed
 * @f: Function pointer printing the argument in the correct format.
 *
 * Description: This structure associate a format specifier with the function
 * to print the argument in the right format
 */

typedef struct print_args
{
	char *specifiers;
	int (*f)(va_list args);
} print_a;

#endif
