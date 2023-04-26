#include "main.h"

/**
 * handle_percent - a function that prints character(s)
 * according to the %% format specifier
 * @aq: va_list
 * @len: pointer to the length of the buffer
 *
 * Return: nothing
*/
void handle_percent(va_list aq, int *len)
{
	int i;

	i = *len;
	va_arg(aq, int);
	_putchar('%');
	i++;
	*len = i;
}
