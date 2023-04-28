#include "main.h"

/**
 * handle_bin - a function that handles the %b format specifier
 * It adds the binary rep of the input to the buffer.
 * @ap: va_list
 * @buffer: pointer to the buffer
 * @b_count: current index of hte buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int handle_bin(va_list ap, char *buffer,  int b_count)
{
	int i = b_count, b = 0, j;
	int num = va_arg(ap, int);
	char bin[512];

	convert_binary(bin, &b, num);
	j = b - 1;
	while (j >= 0)
		buffer[i++] = bin[j--];

	return (i);
}

/**
 * convert_binary - a function that converts an integer to binary
 * @bin: pointer to the result buffer
 * @b: buffer index
 * @n: number to convert
 *
 * Return: nothing
*/
void convert_binary(char *bin, int *b, int n)
{
	int i = *b;

	if ((n / 2) > 0)
	{
		bin[i] = ('0' + (n % 2));
		n = n / 2;
		i++;
		*b = i;
		convert_binary(bin, b, n);
	} else
	{
		bin[i] = '1';
		i++;
		bin[i] = '\0';
		*b = i;
	}
}
