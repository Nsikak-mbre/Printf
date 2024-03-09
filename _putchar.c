#include "main.h"
/**
 * my_putchar -  writes char to stdout
 * @c: given input
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
