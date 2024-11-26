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

/**
 *
 */

typedef struct op
{
	char *op;
	int (*f)(va_list args);
} op_t;

#endif
