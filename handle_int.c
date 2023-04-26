#include "main.h"

/**
 * handle_int - a function that prints character(s)
 * according to the %d or %i format specifier
 * @aq: va_list
 * @len: pointer to the length of the buffer
 *
 * Return: nothing
*/
void handle_int(va_list aq, int *len)
{
	int j = va_arg(aq, int);

	print_int(j, len);
}
