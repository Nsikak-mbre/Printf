#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>

/**
 * struct spec - defines a structure for flags and functions
 * @flag: The operator
 * @f: the function associated
 */

typedef struct
{
	char *flag;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int lexer(const char *format, spec func_ptr[], va_list arg_list);
int my_putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent_sign(va_list list);

#endif
