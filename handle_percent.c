#include "main.h"

/**
 * handle_percent - a function that handles the %% format specifier
 * It add % to the buffer.
 * @ap: va_list
 * @buffer: pointer to the buffer
 * @b_count: current index of the buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int handle_percent(va_list ap, char *buffer,  int b_count)
{
	int i = b_count;

	va_arg(ap, int);
	buffer[i++] = '%';

	return (i);
}
