#include "main.h"

/**
 * print_char -  writes char
 * @list: list of args
 * Return: 0 if successful
 */
int print_char(va_list list)
{
	my_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string -  writes string
 * @list: list of args
 * Return: 0 if successful
 */
int print_string(va_list list)
{
	int count;
	char *ptr;
	ptr = va_arg(list, char *);
	if (ptr == NULL)
		return (0);
	for (count = 0; ptr[count] != '\0'; count++)
		my_putchar(ptr[count]);
	return (count);
}



/**
 * print_percent_sign -  writes %
 * @list: list of args
 * Return: 0 if successful
 */
int print_percent_sign(va_list list)
{
	(void)list;
	my_putchar('%');
	return (0);
}

