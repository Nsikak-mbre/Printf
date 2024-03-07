#include "main.h"
/**
 * _printf - mimic the original version of printf
 * @format: points to list of possible characters
 * Return: total character printed count
 */

int _printf(const char *format, ...)
{
	int char_written;
	specifier func_ptr[] = {
		{"c", write_char},
		{"s", write_string},
		{"%", write_percent_sign},
		{NULL, NULL}
	};
	va_list arg_list;

	if (!format)
		return (-1);
	va_start(arg_list, format);
	char_written = lexer(format, fun_ptr, arg_list);
	va_end(arg_list);
	return (char_written);
}

