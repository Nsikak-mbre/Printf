#include "main.h"
/**
 * lexer - formats specs, to output the correct correspondence
 * @format: list with possible characters
 * @func_ptr_ptr: func_ptrtion pointer, for each input
 * @arg_list: containg parameters passed to a func_ptrtion at runtime
 * Return: count of printed character
 */
int lexer(const char *format, spec func_ptr[], va_list arg_list)
{
	int i = 0, j, temp_val, printed_char = 0;


	while (format[i] != '\0' && format[i] == '%')
	{
		j = 0;
		while (func_ptr[j].flag != NULL)
		{
			if (format[i + 1] == func_ptr[j].flag[0])
			{
				temp_val = func_ptr[j].f(arg_list);
				if (temp_val == -1)
					return (-1);
				printed_char +=  temp_val;
				break;
			}
			j++;
		}
		if (func_ptr[j].flag == NULL && format[i + 1] != ' ')
		{
			if (format[i + 1] != '\0')
			{
				my_putchar(format[i]);
				my_putchar(format[i + 1]);
				printed_char += 2;
			}
			else
				return (-1);
		}
		i++;
	}
	{
		my_putchar(format[i]);
		printed_char++;
	}
	i++;
	return (printed_char);
}

