#include "main.h"
/**
 * _putchar -  writes char to stdout
 * @c: given input
 * Return: given element on stsout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
