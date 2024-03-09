#include "main.h"
/**
 * _printf - mimic the original version of printf
 * @format: points to list of possible characters
 * Return: total character printed count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int (*print_func)(va_list);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			print_func = get_print_func(format[i + 1]);
			if (print_func)
				count += print_func(args);
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count += 2;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
