#include "main.h"

/**
 * handle_string - a function that prints character(s)
 * according to the %s format specifier
 * @ap: va_list
 * @buffer: pointer to the buffer
 * @b_count: current index of the buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int handle_string(va_list ap, char *buffer,  int b_count)
{
	char *s;
	int i = b_count, j;

	s = va_arg(ap, char *);
	j = 0;
	while (s[j] != '\0')
	{
		buffer[i++] = s[j];
		j++;
	}
	return (i);
}
