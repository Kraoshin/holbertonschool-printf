#ifndef prnt_h
#define prnt_h
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);

/**
 *
 */

typedef struct op
{
	char *op;
	int (*f)(va_list args);
} op_t;

#endif
