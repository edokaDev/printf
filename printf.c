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
	int i = 0, j, b_count = 0, pre_b = 0;
	char buffer[1024];
	op_t specifiers[] = {
		{'c', handle_char}, {'s', handle_string}, {'i', handle_int},
		{'d', handle_int}, {'%', handle_percent}, {'b', handle_bin},
		{'\0', NULL}
	};

	if (!format)
		return (-1);
	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++, pre_b = b_count;
			for (j = 0; specifiers[j].s != '\0'; j++)
			{
				if (format[i] == '\0')
					break;
				if (specifiers[j].s == format[i])
				{
					b_count = specifiers[j].f(ap, buffer, b_count);
					break;
				}
			}
			if (b_count == pre_b && format[i])
				i--, buffer[b_count] = format[i], b_count++;
		}
		else
			buffer[b_count] = format[i], b_count++;
		i++;
	}
	va_end(ap);
	buffer[b_count] = '\0';
	print_buffer(buffer, b_count);
	return (b_count);
}
