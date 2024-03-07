#include "main.h"
/**
 * my_putchar -  writes char to stdout
 * @c: given input
 */
void my_putchar(char c)
{
	ssize_t bytes_written = write(1, &c, 1);

	if (bytes_written == -1)
	{
		perror("Error writing to stdout");
	}
}
