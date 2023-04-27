#include "main.h"

/**
 * parse_int - function that adds an integer to the buffer
 * @num: number to parse and add to buffer
 * @buffer: pointer to the buffer
 * @b_count: current index of hte buffer
 *
 * Return: the next buffer int i.e the b_count
*/
int parse_int(int num, char *buffer, int b_count)
{
	int i = b_count;

	if (num < 0)
	{
		buffer[i] = '-';
		num = -num;
		i++;
	}
	if (num > 9)
		i = parse_int(num / 10, buffer, i);
	buffer[i] = '0' + (num % 10);
	i++;

	return (i);
}
