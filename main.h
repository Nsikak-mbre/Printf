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
	int (*f_ptr)(va_list);
} spec;

int _printf(const char *format, ...);
int lexer(char *format, spec func_ptr[], va_list arg_list);
void my_putchar(char c);
int print_char(char c);
int print_string(const char *str);
int print_percent_sign();

#endif
