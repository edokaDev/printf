#include "main.h"

/**
 * handle_int - a function that prints character(s)
 * according to the %d or %i format specifier
 * @aq: va_list
 * @buffer: pointer to the buffer
 * @b_count: current index of hte buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int handle_int(va_list aq, char *buffer, int b_count)
{
	int j = va_arg(aq, int);

	return (parse_int(j, buffer, b_count));
}
