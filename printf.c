#include "main.h"

/**
 * _printf - printf
 * @format: format
 *
 * Return: number of charaters printed
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i, len;

	va_start(ap, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; /*skip the % sign*/
			print_specifier(ap, format[i], &len);
			i++; /*skip the format specifier*/
		}
		len++;
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
