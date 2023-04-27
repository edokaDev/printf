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
	int i = 0, j, b_count = 0;
	char buffer[2000];
	op_t specifiers[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'i', handle_int},
		{'d', handle_int},
		{'%', handle_percent},
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
					b_count = specifiers[j].f(ap, buffer, b_count);
					break;
				}
			}
			i++; /*skip the format specifier*/
		}
		buffer[b_count] = format[i];
		b_count++;
		i++;
	}
	print_buffer(buffer, b_count);
	va_end(ap);
	return (b_count);
}
