#include "main.h"

/**
 * handle_string - a function that prints character(s)
 * according to the %s format specifier
 * @aq: va_list
 * @len: pointer to the length of the buffer
 *
 * Return: nothing
*/
void handle_string(va_list aq, int *len)
{
	char *s;
	int i, j;

	i = *len;

	s = va_arg(aq, char *);
	j = 0;
	while (s[j] != '\0')
	{
		_putchar(s[j]);
		i++;
		j++;
	}
	*len = i;
}
