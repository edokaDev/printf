#include "main.h"

/**
 * _printf - A function that prints characters
 * based on a specifier. Similar to the standard printf()
 * @format: format
 *
 * Return: number of charaters printed
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j, len = 0;
	op_t specifiers[] = {
		{'c', handle_char},
		{'\0', NULL}
	};

	if (!format)
		return (-1);

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; /*skip the % sign*/
			for (j = 0; specifiers[j].s != '\0'; j++)
			{
				if (specifiers[j].s == format[i])
				{
					specifiers[j].f(ap, &len);
					break;
				}
			}
			i++; /*skip the format specifier*/
		}
		len++;
		_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
