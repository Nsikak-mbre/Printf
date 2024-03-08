#include "main.h"
/**
 * my_putchar -  writes char to stdout
 * @c: given input
 */
int my_putchar(char c)
{
	return (write(1, &c, 1));

}
