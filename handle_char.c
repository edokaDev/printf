#include "main.h"

/**
 * handle_char - a function that handles the %c format specifier
 * It adds the char to the buffer.
 * @ap: va_list
 * @buffer: pointer to the buffer
 * @b_count: current index of hte buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int handle_char(va_list ap, char *buffer,  int b_count)
{
	int i = b_count;

	buffer[i] = va_arg(ap, int);
	i++;

	return (i);
}
