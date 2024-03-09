#include "main.h"
/**
 * get_print_func - calls appropriate function for a specifier
 * @specifier: the specifier
 * Return: calls corresponding function or NULL
 */
int (*get_print_func(const char specifier))(va_list)
{
	int i;

	print_func funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	for (i = 0; funcs[i].specifier != '\0'; i++)
	{
		if (funcs[i].specifier == specifier)
			return (funcs[i].func);
	}
	return (NULL);
}
