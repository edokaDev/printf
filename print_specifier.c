#include "main.h"
#include <stdio.h>

/**
 * print_specifier - a function that prints character(s)
 * according to a format specifier
 * @aq: va_list
 * @spec: specifier
 * @len: pointer to the length of the main string
 *
 * Return: nothing
*/
void print_specifier(va_list aq, char spec, int *len)
{
	char c, *s;
	int j, i;

	i = *len;
	switch (spec)
	{
		case 'c':
			c = va_arg(aq, int);
			_putchar(c);
			i++;
			break;
		case 's':
			s = va_arg(aq, char *);
			j = 0;
			while (s[j] != '\0')
			{
				_putchar(s[j]);
				i++;
				j++;
			}
			break;
		case '%':
			va_arg(aq, int);
			_putchar('%');
			i++;
			break;
		default:
			break;
	}
	i++;
	*len = i;
}
