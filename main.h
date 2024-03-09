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
	char specifier;
	int (*func)(va_list);
} print_func;

int _printf(const char *format, ...);
int (*get_print_func(const char specifier))(va_list);
int _strlen(const char *s);
int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);

#endif
