#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: the string to measure
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * print_char -  writes char
 * @list: list of args
 * Return: 0 if successful
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
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
		_putchar(ptr[count]);
	return (count);
}



/**
 * print_percent-  writes %
 * @list: list of args
 * Return: 0 if successful
 */
int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (0);
}

