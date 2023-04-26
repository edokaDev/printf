#include "main.h"

/**
 * print_int - function that prints an integer
 * @num: number to pring
 * @len: pointer to the length of the printing string
 *
 * Return: nothing
*/
void print_int(int num, int *len)
{
	int b = *len;
	int a = num;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		b++;
	}
	*len = b;
	if (num > 9)
		print_int(num / 10, len);

	_putchar('0' + (a % 10));
	b++;
	*len = b;
}
