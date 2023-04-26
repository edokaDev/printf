#include "main.h"

/**
 * handle_char - a function that prints character(s)
 * according to the %c format specifier
 * @aq: va_list
 * @len: pointer to the length of the buffer
 *
 * Return: nothing
*/
void handle_char(va_list aq, int *len)
{
	char c;
	int i;

	i = *len;
	c = va_arg(aq, int);
	_putchar(c);
	i++;
	*len = i;
}
