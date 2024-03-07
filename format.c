#include "main.h"

/**
 * print_char -  writes char
 * @c: element to be written
 * Return: 0 if successful
 */
int print_char(char c)
{
	my_putchar(c);
	return (0);
}

/**
 * print_string -  writes string
 * @str: element to be written
 * Return: 0 if successful
 */
int print_string(const char *str)
{
	if (str == NULL)
		return (-1);
	while (*str != '\0')
	{
		my_putchar(*str);
		str++;
	}
	return (0);
}

/**
 * print_percent_sign -  writes %
 * Return: 0 if successful
 */
int print_percent_sign(void)
{
	my_putchar('%');
	return (0);
}

